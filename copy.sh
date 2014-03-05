P=/home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB

## remplacer le contenu de $P par le chemin sur le script
## ( à l'endroit ou vous avez mit le script )
## faire ensuite un alias sur le script pour qu'il copie tout
##    sur votre dossier courant

cp $P/Makefile Makefile
cp $P/my.h my.h
cp $P/libmy.a libmy.a
cp $P/header.h header.h
cp $P/main.c main.c
##rm -rf ./my_lib
cp -Tr $P/my_lib my_lib
