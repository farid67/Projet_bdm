# Projet_bdm
Projet Base de donnees multimedia

# Objectif :

Répertorier l'ensemble des joueurs de l'histoire du Fc Barcelone dans une base de données.
Une recherche sur la base renverra des informations sur le joueur en question (photos, vidéos d'actions, texte descriptif sur le joueur → fortement inspiré de wikipédia)

Pour commencer nous mettrons uniquement les joueurs de cette année (2014-2015) puis les 5 dernières années, puis …

→ Pouvoir faire une recherche sur les joueurs et demander par exemple 
	" Est ce que Messi a joué avec Iniesta ? " 
La base devra en cas de réponse positive renvoyer une photo où les deux joueurs se trouve grâce à de la reconnaissance de visage, ou si possible une reconnaissance du nom sur le maillot ...

Autre question :
	" Quels sont les numéros 10 de l'histoire du Fc Barcelone ? "
→ Une recherche sera faite sur la base et renverra l'ensemble des joueurs ayant porté le numéro 10 avec l'année 


Evolution possible : (bdd normale)
	Avoir les statistiques des joueurs, les années, les titres, etc
Et poser des questions comme : " Quels sont les joueurs qui ont marqués plus de 50 buts dans leur carrière au Fc Barcelone ? "


# Nom :
	MATYSIAK Pierre – OUHMICH Farid

# Nom de l'équipe : 
Les Blaugrana


# Recherches sur l'état de l'art

Sites visités ayant un rapport plus ou moins direct :

- http://en.wikipedia.org/wiki/List_of_FC_Barcelona_players 
Répertorie les joueurs (non exhaustif) depuis la création du club en 1899. Donne une bonne base pour notre base,
mais les informations données sont limitées (années d'activité, buts/séléctions sans plus de précision...)

- www.fcbarcelona.com
Le site officiel, qui possède quelques statistiques et photos/vidéos désorganisées.

Il n'existe pas (en tout cas pas visible sur Google) de base de données extensive comprenant des photos et vidéos avec 
reconnaissance

# Bilan provisoire

Pour le moment, les ajouts et recherches assez basiques sont gérés par l'application, cependant un onglet avec une recherche sur les statistiques plus complètes des joueurs doit être ajouté, avec des requêtes comme "savoir quels sont tous les joueurs qui étaient dans l'équipe de 2015?"
(ces ajouts sont assez simple au niveau de la bdd, mais l'intégration avec qt est assez longue à mettre en place)

Pour ce qui est de la reconnaissance de texte, l'utilisation de tesseract donnait le résultat attendu à certains moments (avec un peu de triche sur les retours obtenus par la fonction pour ne récupérer que des entiers, etc)
Si d'autres outils de reconnaissance de texte plus fiables apparaissent d'ici là, il serait bien de penser à les ajouter à l'application.
