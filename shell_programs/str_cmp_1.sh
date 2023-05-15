#!/bin/bash

echo -n "enter string 1: "
read str1
echo -n "enter string 2: "
read str2

if [ ${str1} = ${str2} ]
then 
     echo "Both string are equall"
else
     echo "Both strings are not equall"
fi
