#include "CImg/CImg.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace cimg_library;

#ifndef cimg_imagepath
#define cimg_imagepath ""
#endif

#define eps 1e-4

float min_c (float a, float b, float c)
{
	return (a<b ? (a<c?a:c):(b<c?b:c));
}

float max_c (float a, float b, float c)
{
	return (a>b ? (a>c?a:c):(b>c?b:c));
}

float abs_c (float x)
{
	return (x<0?-x:x);
}

CImg<float> SE(13,13,1,1,0);

void SE_set() // élément structurant
{
	const float white[] = {255.0};
	const float black[] = {0.0};
	
	for(int i = 0; i < 13; i++)
	{
		for(int j = 0; j < 13; j++)
		{
			SE.draw_point(i,j,black);
		}
	}
	
	SE.draw_point(0,0,white);
	SE.draw_point(0,1,white);
	SE.draw_point(0,2,white);
	SE.draw_point(0,10,white);
	SE.draw_point(0,11,white);
	SE.draw_point(0,12,white);
	SE.draw_point(1,0,white);
	SE.draw_point(1,1,white);
	SE.draw_point(1,11,white);
	SE.draw_point(1,12,white);
	SE.draw_point(2,0,white);
	SE.draw_point(2,12,white);
	SE.draw_point(10,0,white);
	SE.draw_point(10,12,white);
	SE.draw_point(11,0,white);
	SE.draw_point(11,1,white);
	SE.draw_point(11,11,white);
	SE.draw_point(11,12,white);
	SE.draw_point(12,0,white);
	SE.draw_point(12,1,white);
	SE.draw_point(12,2,white);
	SE.draw_point(12,10,white);
	SE.draw_point(12,11,white);
	SE.draw_point(12,12,white);
}


int main(int argc,char **argv)
{
	const char* file_i;
	if(argc<2)
	{
		file_i = cimg_option("-i",cimg_imagepath "10.ppm","Input image");
	}
	else
	{
		file_i = cimg_option("-i",argv[1],"Input image");
	}

	
	const CImg<unsigned char> image = CImg<>(file_i);

	const int width = image.width();
	const int height = image.height();
	
	std::cout << "width : " << width << "  height : " << height << std::endl;

	CImg<float> copy(width, height, 1, 1, 0); // deuxième chiffre indique nombre de composantes (3 = rgb, 1 = gris)
	
	const float white[] = {255.0};
	const float black[] = {0.0};
	
	float val_red, val_green, val_blue, R, G, B, Hue;
	
	for(int i = 0; i < width; ++i)
	{
		for(int j = 0; j < height; ++j)
		{
			val_red = image(i,j,0);
			val_green = image(i,j,1);
			val_blue = image(i,j,2);
			R = val_red / 255;
			G = val_green / 255;
			B = val_blue / 255;
			
			float max = max_c(R,G,B);
			float min = min_c(R,G,B);
			
			if( abs_c(max-R) < eps)
				Hue = (G-B)/(max-min);
			else if( abs_c(max-G) < eps)
				Hue = 2.0 + (B-R)/(max-min);
			else if( abs_c(max-B) < eps)
				Hue = 4.0 + (R-G)/(max-min);
				
			Hue *= 60;
			if(Hue<0)
				Hue += 360;
			
			if(Hue<=69 && Hue>=45 && val_blue < 70 && val_green > 150 && val_green > 150)
				copy.draw_point(i,j,black);
			else
				copy.draw_point(i,j,white);				
		}
	}
		
	copy.save("copy.ppm");

	SE_set();
	SE.save("dil.ppm");
	
	// Erosion
	
	CImg<float> eroded(width, height, 1, 1, 255);
	
	for (int i = 6; i <= width-6; ++i)
	{
		for (int j = 6; j <= height-6; ++j)
		{
			if( abs_c(copy(i,j,0)))
			{
				for (int k = i-6; k <= i+6; ++k)
				{
					for (int l = j-6; l <= j+6; ++l)
					{
						const float val[] = { std::min(std::min(eroded(k,l,0), copy(k,l,0)), SE(k-i+6,l-j+6,0)) };
						eroded.draw_point(k,l,val); 
					}
				}
			}
		}
	}
	eroded.save("ero.ppm");
	
	// Dilatation
	
	CImg<float> dilated(width, height, 1, 1, 0);

	for (int i = 6; i <= width-6; ++i)
	{
		for (int j = 6; j <= height-6; ++j)
		{
			if( abs_c(eroded(i,j,0)-255) < eps)
			{
				for (int k = i-6; k <= i+6; ++k)
				{
					for (int l = j-6; l <= j+6; ++l)
					{
						const float val[] = { std::max(std::max(dilated(k,l,0),eroded(k,l,0)), SE(k-i+6,l-j+6,0)) };
						dilated.draw_point(k,l,val); 
					}
				}				
			}
		}
	}	
	dilated.save("dila.ppm");
	
	// Inversion couleurs
	
	CImg<float> result(width, height, 1, 1, 0);
	
	for (int i = 0; i <= width; ++i)
	{
		for (int j = 0; j <= height; ++j)
		{
			const float val[] =  { abs_c(dilated(i,j,0) - 255) };
			result.draw_point(i,j,val);
		}
	}
	
	result.save("final.ppm");

	return 0;
}

