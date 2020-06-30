#!/usr/bin/env zsh

if [[ ! -f middle.c ]]
then
	echo "please launch this script from within the middle/code/ directory"
	return 1
fi

if [[ -d obj ]]
then
	rm obj/*.o
else
	mkdir -p obj
fi

mkdir -p lib

for file_c in *.c
do
	gcc -c $file_c -o obj/${file_c:r}.o
done

ar -rs lib/libmiddle.a obj/*.o
