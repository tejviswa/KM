
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 08-01-2025
# Program: 
# Sample Input :
# Sample output :
#


read -p "Enter number: " num

r=0
res=0

while [ $num -gt 0 ]
do
	r=$((num%10))
	res=$((res*10+r))
	num=$((num/10))
done

echo " $res"




