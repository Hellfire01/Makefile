Quelques conseils d'utilisation :

===Makefile===

note :
  Ce Makefile est à la norme d'EPITECH, il est néanmoins plus
  grand et comporte des commandes plus complètes qui vous
  seront, je l'espère, utiles.

les commandes spéciales de ce Makefile sont :

  - abs ( recompile la lib, élimine les fichiers temporaires, compile
          avec des flags )
  - old ( supprime tous les fichiers temporaires )

  ==> toutes les autres commandes utilisent abs comme base <==
  - exe ( lance le binaire )
  - env ( vérifie l'environnement ==> env -i ./binaire )
  - ech ( vérifie les read ==> echo | ./binaire )
  - cat ( vérifie l'affichage ==> ./binaire | cat -e )
  - val ( utilise vangrind ==> valgrind -v -q ./bianaire )

===copy.sh===

mettre le chemin sur le script dans le script puis mettre un alias dans
le .bashrc, cela pemet d'avoir une base ( lib, Makefile, ... ) pour
chaque nouveau projet avec une simple commande shell ( gain de temps
garantit !!! ).




Merci de laisser un commentaire pour pouvoir améliorer le tout !


made by raynau_a, EPITECH, promo 2018
