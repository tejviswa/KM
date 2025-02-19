
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 09-01-2025
# Program: Write a shell script to list all of the directory files in a directory.
# Sample Input :./10_list_files_in_directory.sh dir

# Sample output :2e
#				 ew
#				 wq

#


if [ $# -eq 0 ]
then
	for i in *
	do
		echo $i
	done
elif [ -d $1 ]
then
	cd $1
	for i in *
	do
		echo $i
	done
	cd ..
else
	echo "It's not a directory"
fi





