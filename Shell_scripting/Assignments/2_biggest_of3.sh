
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 08-01-2025
# Program: 
# Sample Input :
# Sample output :
#./2_biggest_of3.sh 1 2 3 4
#Enter min 3 arguments after ./2_biggest_of3.sh and not more than 3

#./2_biggest_of3.sh 64 54 98
# 98 is biggest

#


if [ $# -ne 3  ]
then
	echo "Enter min 3 arguments after $0 and not more than 3 "
elif [ $1 -gt $2 ] && [ $1 -gt $3 ]
then
	echo " $1 is biggest"
elif [ $2 -gt $3 ]
then
	echo " $2 is biggest"
else
	echo " $3 is biggest"
fi




