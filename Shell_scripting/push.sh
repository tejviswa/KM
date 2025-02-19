





#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 25-01-2025
# Program: Custom git push using shell script
# 
#



read -p "Enter commit message: " msg

git add $1
git commit -m"$msg"
git push

