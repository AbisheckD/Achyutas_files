#!/bin/bash

echo -n "enter value: "
read num
count=0

while [ $count -lt $num ]
do
   echo "in loop - $count"
   count=$((count+1))
done

echo "loop completed"
