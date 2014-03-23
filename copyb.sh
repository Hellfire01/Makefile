#!/bin/sh
## copyb.sh for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB
## 
## Made by matthieu raynaud de fitte
## Login   <raynau_a@epitech.net>
## 
## Started on  Mon Mar 17 18:08:35 2014 matthieu raynaud de fitte
## Last update Sun Mar 23 20:02:42 2014 matthieu raynaud de fitte
##

P=/home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/unique
B=/home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/multiples

## remplacer le contenu de $P par le chemin sur le script
## ( à l'endroit ou vous avez mit le script )
## faire ensuite un alias sur le script pour qu'il copie tout 
##    sur votre dossier courant

cp $B/Makefile Makefile
cp $P/my.h my.h
cp $P/libmy.a libmy.a
cp $P/header.h header.h
cp -Tr $P/lib lib
cp -Tr $B/bin_1 bin_1
cp -Tr $B/bin_2 bin_2
mkdir bin
