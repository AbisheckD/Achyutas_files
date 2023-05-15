#!/bin/bash

echo -n "Enter a value: "
read CNT

for ((i = 0; i < 5; i++))
do 
   CNT=$((CNT+1))
   echo "the increment from number entered to 5 times is $CNT"
done
echo "First loop executed successfully"

echo -n "Enter number: "
read NUM
SUM=0

for I in `seq $NUM`
do
  SUM=`expr $SUM + $I`
  I=$((I+1))
done
echo "Total sum = $SUM"
echo "Second loop executed successfully" 
