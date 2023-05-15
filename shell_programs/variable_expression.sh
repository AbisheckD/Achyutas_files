#!/bin/bash

echo -n "Enter the 1st number: "  #  n is for the newline
read num1                         #  read is to read a value and store

echo -n "Enter the 2nd number: "
read num2

sum=$((num1 + num2))              # use double parenthesis
echo "The sum is $sum"
 
sum=`expr $num1 + $num2`          #  use back tick
echo "The sum using expr is $sum"
