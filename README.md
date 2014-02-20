Quelques conseils d'utilisation :

===Makefile===

les options qui interessent le plus sont :
  - abs ( recompile la lib, élimine les fichiers temporaires, compile
          avec des flags )
  - exe ( fait la même chose que abs et lance le binaire en plus )
  - env ( lance le binaire en env -i )
  - test1 ( vérifie les read )
  - test2 ( vérifie l'affichage )

===copy.sh===

mettre son path sur le binaire dans le script puis mettre un alias dans
le .bashrc, cela pemettre d'avoir une base ( lib, Makefile, ... ) pour
chaque nouveau projet avec une simple commande shell.




Merci de laisser un commentaire pour pouvoir amméliorer le tout !


made by raynau_a, EPITECH, promo 2018