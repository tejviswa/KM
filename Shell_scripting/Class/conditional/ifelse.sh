
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 07-01-2025
# Program: 
# Sample Input :
# Sample output :
#

echo "enter file name"

read file

if [ -f $file ]
then
	echo "$file exist"
	if [ -r $file ]
	then
		echo "$file file have read permission"
	else
		echo "$file  file dosen't have read permission"
	fi
else
	echo "$file file not exist"
fi




