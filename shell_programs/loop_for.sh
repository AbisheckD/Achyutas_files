#!/bin/bash

count=0

for i in 0 1 2 3 4 
do
   echo "loop count is $count"
   count=$((count + 1))
done

for fruit in apple orange pineapple guva 
do
  echo "the fruits that i like are $fruit"
done
