P=TON_DOSSIER

## remplacer TON_DOSSIER par le chemin sur le script
## faire ensuite un alias sur le script pour qu'il copie tout
##    sur votre dossier courant

cp /$P/Makefile Makefile
cp /$P/my.h my.h
cp /$P/libmy.a libmy.a
cp /$P/header.h header.h
cp /$P/get_next.c get_next.c
cp /$P/get_next.h get_next.h
cp /$P/main.c main.c
cp -r /$P/my_lib my_lib
