This is my version of a standard CPP Makefile

it features :
- compiling.o files in a separate directory
- easy to read compilation

and allows :
- better project organisation
- slightly compilation speed increase

but beware :
it is not designed for servers, the $TERM in the environment is needed by the tput and its absence will result in failure of the compilation
