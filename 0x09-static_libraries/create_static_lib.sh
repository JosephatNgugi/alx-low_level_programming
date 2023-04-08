#!/bin/bash
echo "----------------------------"
echo "Generating object files"
echo "----------------------------"

gcc -c *.c

echo "----------------------------"
echo "Creating liball.a library."
echo "----------------------------"

ar rcs liball.a *.o

echo "----------------------------"
echo "Library Created successfully"
echo "----------------------------"

