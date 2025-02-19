
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 07-01-2025
# Program: 
# Sample Input :
# Sample output :
#


if [ $# -gt 2 ]
then
	echo " Enter two arguments only after $0 "
elif [ $# -lt 2 ]
then
	echo " Enter min two arguments after $0 "
else
	echo " Sum of $1 and $2 is $(expr $1 + $2) "
fi


