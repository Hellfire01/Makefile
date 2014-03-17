#!/bin/sh
## copy.sh for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB
## 
## Made by matthieu raynaud de fitte
## Login   <raynau_a@epitech.net>
## 
## Started on  Mon Mar 17 18:08:45 2014 matthieu raynaud de fitte
## Last update Mon Mar 17 18:11:28 2014 matthieu raynaud de fitte
##

P=/home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/unique

## remplacer le contenu de $P par le chemin sur le script
## ( à l'endroit ou vous avez mit le script )
## faire ensuite un alias sur le script pour qu'il copie tout
##    sur votre dossier courant

cp $P/Makefile Makefile
cp $P/my.h my.h
cp $P/libmy.a libmy.a
cp $P/header.h header.h
cp $P/main.c main.c
cp -Tr $P/lib lib
cp -Tr $P/bin bin
