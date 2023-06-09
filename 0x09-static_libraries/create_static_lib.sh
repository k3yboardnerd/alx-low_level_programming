#!/bin/bash

#1. Compile *.c files to --.o files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

#2. Make the liball.a file
ar cr liball.a *.o
