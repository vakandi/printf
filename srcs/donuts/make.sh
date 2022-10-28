#!/bin/sh
echo "\033[1;34mDo you want to make a extra donuts? Type Y for yes and N for no, then Enter\n\033[0m"
read input
if [ "$input" = "Y" ]; then
	make
else
	exit
fi
