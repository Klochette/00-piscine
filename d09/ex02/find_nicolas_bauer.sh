#!/bin/sh
VAR=$ (cat $1 | grep -i 'bauer' | grep -i 'nicolas')
for word in $VAR;
do
	echo $word | grep '-' | grep '[0-9]';
done
