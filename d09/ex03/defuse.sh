#!/bin/sh
touch -A -000001 -a bomb.txt
stat -xt "%s" bomb.txt | grep Access | cut -d ' ' -f  2
