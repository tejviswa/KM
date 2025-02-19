
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 09-01-2025
# Program: Write a shell script that receives any number of file names as arguments, checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.

# Sample Input :./9_status_of_files.sh test.txt mod.sh
# Sample output :test.txt is a file containing  3 lines
#				 mod.sh is a file containing  17 lines

#

#here $@ is used to check all command line arugments
#where as $# is used to check the count of command line arguments
#$= indicates the number of lines in a file used along with sed
#wc -l <filename> also used to indicate the number of lines in a file

for i in $@
do
	if [ -e $i ]
	then
		if [ -f $i ]
		then
			#	lines=$(sed -n '$=' "$i")
			#	echo "$i is a file containing  $(sed -n '$=' "$i") lines"
			echo "$i is a file containig `wc -l $i` lines"
		fi
		if [ -d $i ]
		then
			cd $i
			c=0
			for j in *
			do
				c=$((c+1))
			done
			cd ..
			echo "$i is a directory containing $c files"
		fi	
	fi
done



