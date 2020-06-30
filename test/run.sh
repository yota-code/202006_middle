#!/usr/bin/env zsh

pushd ../code
	./compile.sh
popd

gcc -I../code -I. main.c ../code/lib/libmiddle.a -o main.exe

./main.exe 1.0 2.0 3.0 4.0 6.0 1
./main.exe 1.0 2.0 3.0 4.0 6.0 2

