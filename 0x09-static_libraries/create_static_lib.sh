#!/bin/bash

gcc -c -Wall -Werror -Wextra -pedantic -fpic *.c

ar rcs liball.a *.o

rm *.o

