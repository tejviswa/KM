
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 07-01-2025
# Program: 
# Sample Input :
# Sample output :
#


#read -p "Enter string 1: " str1
#read -p "Enter string 2: " str2

#if [ $str1 = $str2 ]
#then
#	echo strings are equal
#else
#	echo strings are not equal
#fi


time=`date +%H`

if [ $time -lt 12 ]
then
	echo "Good morning"
elif [ $time -lt 16 ]
then
	echo "Good afternoon"
elif [ $time -lt 20 ]
then
	echo "Good evening"
else
	echo "Good night"
fi








