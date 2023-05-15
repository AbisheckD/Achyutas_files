#!/bin/bash

echo -n "Enter the number 1 : "
read NUM1

echo -n "Enter the number 2 : "
read NUM2

if [ $NUM1 -lt $NUM2 ]                  #  -lt is lesser than
then 
    echo "NUM1-  $NUM1 is less than NUM2-  $NUM2"     #  true - executes condition 1
else
    echo "NUM1-  $NUM1 is greater than NUM2-  $NUM2"  #  false - execute condition 2
fi
