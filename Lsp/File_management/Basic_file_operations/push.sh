





#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 25-01-2025
# Program: 
# Sample Input :
# Sample output :
#



read -p "Enter commit message: " msg

git add $1
git commit -m"$msg"
read -p "Continue to push(y/n)" yn
if [yn -e "y" ]
then
	git commit -m"$msg"
	git push
fi
git push

