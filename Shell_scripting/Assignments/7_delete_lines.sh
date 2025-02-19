
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 09-01-2025
# Program: 
# Sample Input :
# Sample output :
#


read -p "Enter filename: " file

#file=test.txt
if [ -f $file ]
then
	#cat $file
	read -p "Enter word to delete: " word
	grep $word $file
	if [ $? -eq 0 ]
	then
		sed -i  "/$word/d"  "$file"
		echo "$word deleted from file"
		cat $file
	else
		echo "$word dosen't exist in that file"
	fi
else
	echo "No such file"
fi

 



