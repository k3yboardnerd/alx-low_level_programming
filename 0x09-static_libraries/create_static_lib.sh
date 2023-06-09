#!/bin/bash

# Compile *.c files to --.o files, create liball.a and then create the index
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar cr liball.a *.o
ranlib liball.a
