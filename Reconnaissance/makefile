CIMG_FILES = Morpho

#---------------------------------
# Set correct variables and paths
#---------------------------------
CIMG_VERSION = 1.6.4_pre060315
X11PATH      = /usr/X11R6
CC           = g++
EXEPFX       =
CCVER       = $(CC)
ifeq ($(notdir $(CC)),g++)
CCVER        = `$(CC) -v 2>&1 | tail -n 1`
endif
ifeq ($(notdir $(CC)),clang++)
CCVER        = `$(CC) -v 2>&1 | head -n 1`
endif
ifeq ($(notdir $(CC)),icpc)
CCVER        = "icpc \( `$(CC) -v 2>&1`\)"
CFLAGS       = -I..
LIBS         =
else
CFLAGS       = -I.. -Wall -W
LIBS         = -lm
endif

#--------------------------------------------------
# Set compilation flags allowing to customize CImg
#--------------------------------------------------

# Flags to enable strict code standards
ifeq ($(notdir $(CC)),icpc)
CIMG_ANSI_CFLAGS = -std=c++11 -ansi
else
CIMG_ANSI_CFLAGS = -std=c++11 -ansi -pedantic
endif

# Flags to enable code debugging.
CIMG_DEBUG_CFLAGS = -Dcimg_verbosity=3 -Dcimg_strict_warnings -g -fsanitize=address

# Flags to enable color output messages.
# (requires a VT100 compatible terminal)
CIMG_VT100_CFLAGS = -Dcimg_use_vt100

# Flags to enable code optimization by the compiler.
ifeq ($(notdir $(CC)),g++)
CIMG_OPT_CFLAGS = -O2 -mtune=generic
else
ifeq ($(notdir $(CC)),icpc)
CIMG_OPT_CFLAGS = -fast
else
CIMG_OPT_CFLAGS = -O2
endif
endif

# Flags to enable OpenMP support.
ifeq ($(notdir $(CC)),icpc)
CIMG_OPENMP_CFLAGS = #-Dcimg_use_openmp -openmp -i-static    # -> Seems to bug the compiler!
else
CIMG_OPENMP_CFLAGS = -Dcimg_use_openmp -fopenmp
endif

# Flags to enable OpenCV support.
CIMG_OPENCV_CFLAGS = -Dcimg_use_opencv -I/usr/include/opencv
CIMG_OPENCV_LIBS = -lopencv_core -lopencv_highgui
#CIMG_OPENCV_LIBS = -lcv -lhighgui    #-> Use this for OpenCV < 2.2.0

# Flags used to disable display capablities of CImg
CIMG_NODISPLAY_CFLAGS = -Dcimg_display=0

# Flags to enable the use of the X11 library.
# (X11 is used by CImg to handle display windows)
# !!! For 64bits systems : replace -L$(X11PATH)/lib by -L$(X11PATH)/lib64 !!!
CIMG_X11_CFLAGS = -I$(X11PATH)/include
CIMG_X11_LIBS = -L$(X11PATH)/lib -lpthread -lX11

# Flags to enable fast image display, using the XSHM library (when using X11).
# !!! Seems to randomly crash when used on MacOSX and 64bits systems, so use it only when necessary !!!
CIMG_XSHM_CFLAGS = # -Dcimg_use_xshm
CIMG_XSHM_LIBS = # -lXext

# Flags to enable GDI32 display (Windows native).
CIMG_GDI32_CFLAGS = -mwindows
CIMG_GDI32_LIBS = -lgdi32

# Flags to enable screen mode switching, using the XRandr library (when using X11).
# ( http://www.x.org/wiki/Projects/XRandR )
# !!! Not supported by the X11 server on MacOSX, so do not use it on MacOSX !!!
CIMG_XRANDR_CFLAGS = -Dcimg_use_xrandr
CIMG_XRANDR_LIBS = -lXrandr

# Flags to enable native support for PNG image files, using the PNG library.
# ( http://www.libpng.org/ )
CIMG_PNG_CFLAGS = -Dcimg_use_png
CIMG_PNG_LIBS = -lpng -lz

# Flags to enable native support for JPEG image files, using the JPEG library.
# ( http://www.ijg.org/ )
CIMG_JPEG_CFLAGS = -Dcimg_use_jpeg
CIMG_JPEG_LIBS = -ljpeg

# Flags to enable native support for TIFF image files, using the TIFF library.
# ( http://www.libtiff.org/ )
CIMG_TIFF_CFLAGS = -Dcimg_use_tiff
CIMG_TIFF_LIBS = -ltiff

# Flags to enable native support for MINC2 image files, using the MINC2 library.
# ( http://en.wikibooks.org/wiki/MINC/Reference/MINC2.0_Users_Guide )
CIMG_MINC2_CFLAGS = -Dcimg_use_minc2 -I${HOME}/local/include
CIMG_MINC2_LIBS = -lminc_io -lvolume_io2 -lminc2 -lnetcdf -lhdf5 -lz -L${HOME}/local/lib

# Flags to enable native support for EXR image files, using the OpenEXR library.
# ( http://www.openexr.com/ )
CIMG_EXR_CFLAGS = -Dcimg_use_openexr -I/usr/include/OpenEXR
CIMG_EXR_LIBS = -lIlmImf -lHalf

# Flags to enable native support for various video files, using the FFMPEG library.
# ( http://www.ffmpeg.org/ )
CIMG_FFMPEG_CFLAGS = -Dcimg_use_ffmpeg -D__STDC_CONSTANT_MACROS -I/usr/include/libavcodec -I/usr/include/libavformat -I/usr/include/libswscale -I/usr/include/ffmpeg
CIMG_FFMPEG_LIBS = -lavcodec -lavformat -lswscale

# Flags to enable native support for compressed .cimgz files, using the Zlib library.
# ( http://www.zlib.net/ )
CIMG_ZLIB_CFLAGS = -Dcimg_use_zlib
CIMG_ZLIB_LIBS = -lz

# Flags to enable native support for downloading files from the network.
# ( http://curl.haxx.se/libcurl/ )
CIMG_CURL_CFLAGS = -Dcimg_use_curl
CIMG_CURL_LIBS = -lcurl

# Flags to enable native support of most classical image file formats, using the Magick++ library.
# ( http://www.imagemagick.org/Magick++/ )
CIMG_MAGICK_CFLAGS = -Dcimg_use_magick `Magick++-config --cppflags` `Magick++-config --cxxflags`
CIMG_MAGICK_LIBS = `Magick++-config --ldflags` `Magick++-config --libs`

# Flags to enable faster Discrete Fourier Transform computation, using the FFTW3 library
# ( http://www.fftw.org/ )
CIMG_FFTW3_CFLAGS = -Dcimg_use_fftw3
ifeq ($(OSTYPE),msys)
CIMG_FFTW3_LIBS = -lfftw3-3
else
CIMG_FFTW3_LIBS = -lfftw3 -lfftw3_threads
endif

# Flags to enable the use of LAPACK routines for matrix computation
# ( http://www.netlib.org/lapack/ )
CIMG_LAPACK_CFLAGS = -Dcimg_use_lapack
CIMG_LAPACK_LIBS = -lblas -lg2c -llapack

# Flags to enable the use of the Board library
# ( http://libboard.sourceforge.net/ )
CIMG_BOARD_CFLAGS = -Dcimg_use_board -I/usr/include/board
CIMG_BOARD_LIBS = -lboard

# Flags to compile on Sun Solaris
CIMG_SOLARIS_LIBS = -R$(X11PATH)/lib -lrt -lnsl -lsocket

# Flags to compile GIMP plug-ins.
ifeq ($(MSYSTEM),MINGW32)
CIMG_GIMP_CFLAGS = -mwindows
endif

#-------------------------
# Define Makefile entries
#-------------------------
.cpp:
	@echo
	@echo "** Compiling '$* ($(CIMG_VERSION))' with '$(CCVER)'"
	@echo
	$(CC) -o $(EXEPFX)$* $< $(CFLAGS) $(CONF_CFLAGS) $(LIBS) $(CONF_LIBS)
ifeq ($(STRIP_EXE),true)
ifeq ($(MSYSTEM),MINGW32)
	strip $(EXEPFX)$*.exe
else
	strip $(EXEPFX)$*
endif
endif
menu:
	@echo
	@echo "CImg Library $(CIMG_VERSION) : Examples"
	@echo "-----------------------------"
	@echo "  > linux    : Linux/BSD target, X11 display, optimizations disabled."
	@echo
	@echo "  > clean    : Clean generated files."
	@echo
	@echo "Choose your option :"
	@read CHOICE; echo; $(MAKE) $$CHOICE; echo; echo "> Next time, you can bypass the menu by typing directly 'make $$CHOICE'"; echo;

all: $(CIMG_FILES)

clean:
	rm -rf *.exe *.o *~ \#* $(CIMG_FILES) $(CIMG_EXTRA_FILES)
ifneq ($(EXEPFX),)
	rm -f $(EXEPFX)*
endif

linux:
	@$(MAKE) \
"CONF_CFLAGS = \
$(CIMG_ANSI_CFLAGS) \
$(CIMG_VT100_CFLAGS) \
$(CIMG_X11_CFLAGS) \
$(CIMG_XSHM_CFLAGS)" \
"CONF_LIBS = \
$(CIMG_X11_LIBS) \
$(CIMG_XSHM_LIBS)" \
all
