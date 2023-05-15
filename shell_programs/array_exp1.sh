#!/bin/bash


fruits=(apple mango pineapple banana grape)
echo "element 0 : ${fruits[0]}"
echo "element 1 : ${fruits[1]}"
echo "element 2 : ${fruits[2]}"
echo "element 3 : ${fruits[3]}"
echo "element 4 : ${fruits[4]}"

echo "length : ${#fruits[@]}"
echo "whole array : ${fruits[@]}"
echo "whole array : ${fruits[*]}"

echo "using loops: "
for ITEM in ${fruits[@]}
do
 echo $ITEM
done
