#!/bin/sh
DIR="printfTester"
if [ -d "$DIR" ]; then
	echo "The folder "printfTester" already exist, starting testing now..."
else
	echo "The folder "printfTester" Doesnt exist, git clone now.."
	git clone  https://github.com/Tripouille/printfTester.git
fi

cd printfTester
make m
cd ..
rm -rf printfTester
echo "Folder removed and test finished"
