
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 10-01-2025
# Program: 
# Sample Input :
# Sample output :
#

gdialog --title "Configuration" --checklist "Select options" 15 30 10 1 "Debug" "off"  2 "Add" "off" 3 "SUB" "off" 4 "MUL" "off" 5 "DIV" "off" 6 "Static" "off" 2>f.txt

for i in 1 2 3 4 5 6 7
do
	grep $i f.txt >/dev/null
	if [ $? -eq 0 ]
	then
	#	cd src
		sed -i "$i s/#/ /" src/.config             #to remove #
	elif [ $? -eq 1 ]
	then
	#	cd src
		sed -i "$i s/ /#/" src/.config          # to add #
	fi
done

rm f.txt




