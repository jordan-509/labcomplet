#!/bin/sh
echo " entrer vos nombre "
read n 

read d
if [ $n -gt $d ]
then 
	echo " c'est plus grand  "

elif [ $n -eq $d ]
then 	
 	echo " c'est egal "	
else 
	echo " c'est plus petit "
	
fi
