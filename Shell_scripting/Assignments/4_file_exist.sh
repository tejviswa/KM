
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 08-01-2025
# Program: 
# Sample Input :
# Sample output :
#


if [ $# -lt 1 ]
then
	echo "Enter file name to search"
elif [ $# -gt 1 ]
then
	echo "Enter only one file name"

elif [ -f $1 ]
then
	echo "$1 file exist"
else
	echo "No such file or directory"
fi





