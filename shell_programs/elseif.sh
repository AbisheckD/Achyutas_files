#!/bin/bash

echo -n "Enter the number: "
read NUM

if [ $NUM -gt 0 ]
then 
    echo "$NUM is postive number"
elif [ $NUM -lt 0 ]
then
    echo "$NUM is negative number"
else
    echo "$NUM is 0"
fi    
