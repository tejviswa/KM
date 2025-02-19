
#!/bin/bash


# Name : Tejo prapulla
# KMID : KM56BESD04
# Date : 07-01-2025
# Program: 
# Sample Input :
# Sample output :
#




while sleep 1;
  do tput sc;
  tput cup 0 $(($(tput cols)-11));
  echo -e "\e[32m`date +%r`\e[39m";
  tput rc;
done &




