
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 09-01-2025
# Program: 
# Sample Input :
# Sample output :
#


for i in *
do
	if [ -r $i ] && [ -w $i ] && [ -x $i ]
	then
		echo $i
	fi
done



