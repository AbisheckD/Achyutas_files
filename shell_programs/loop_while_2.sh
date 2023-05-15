#!/bin/bash

echo -n "Enter a number: "
read NUM

I=1
SUM=0

while [ $I -le $NUM ]
do
   SUM=`expr $SUM + $I`
   # echo "$I"
   I=$((I + 1))
done
echo "The sum is: $SUM" 
