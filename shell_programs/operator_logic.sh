#!/bin/bash

echo -n "Enter value : "
read num

if [ $num -ge 10 -a $num -le 20 ]
then 
   echo "number $num is inbetween 10 and 20"
else
   echo "number $num  is not between 10 and 20"
fi

echo -n "enter number: "
read num1

if [ $num1 -gt 10 -o $num1 -lt 20 ]
then 
   echo "number $num1 is not between 10 and 20"
else
   echo "number $num1 is inbetween 10 and 20"
fi 
