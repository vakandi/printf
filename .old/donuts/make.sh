#!/bin/sh
BLUE="\033[1;34m"
BACK_GREEN="\033[1;42m"
BACK_PURPLE="\033[1;43m"
END="\033[0m"
echo "${BLUE}Do you want to test the functions printf by printing a 3D Donuts? Type ${END}${BACK_GREEN} Y ${END}${BLUE} for yes OR ${BACK_PURPLE} Press ENTER ${END}\n${END}"
read input
if [ "$input" = "Y" ] || [ "$input" = "y" ]; then
	cd srcs/donuts/
	make
else
	exit
fi
