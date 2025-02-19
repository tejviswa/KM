
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 08-01-2025
# Program: 
# Sample Input :
# Sample output :
#

if [ $# -eq 3 ]
then
	if [ -f $1 ]
	then
		if [$2 -lt $3 ]
		then
			sed -n "$2,$3p" "$1"
		else
			echo "Enter line numbers correctly"
	else
		echo "No such file "
	fi
else
	echo "invalid arguments"
fi




