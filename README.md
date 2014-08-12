Quelques conseils d'utilisation :

===Makefile===

note :
  Ce Makefile est à la norme d'EPITECH, il est néanmoins plus
  grand et comporte des commandes plus complètes qui vous
  seront, je l'espère, utiles pour la conception de votre programme.

les commandes spéciales de ce Makefile sont :

  - abs : compilation avec des couleurs ( équivaut à un "make fclean ; make ;
           make clean" dans le bash )

  - exe : compile avec abs puis lance le binaire

  - val : compile avec abs puis lance le binaire avec valgrind

  - go  : ( et ses 2 variantes ) servent à lancer le binaire via des alias
          dans le Makefile ou plus simplement pour ne pas avoir à tout
          écrire avec valgrind

===copy.sh===

Mettre le chemin sur le script dans le script puis mettre un alias dans
le ~/.bashrc, cela pemet d'avoir une base ( lib, Makefile, ... ) pour
chaque nouveau projet avec une simple commande shell ( gain de temps
garantit !!! ).


copy.sh se charge de copier la bonne lib ainsi que le reste, vous n'avez donc
rien à faire à la main


merci de laisser un commentaire pour pouvoir améliorer le tout !


made by raynau_a, EPITECH, promo 2018
