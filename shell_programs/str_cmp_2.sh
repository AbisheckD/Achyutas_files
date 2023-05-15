#!/bin/bash

echo -n "Enter string 1: "
read str1
echo -n "Enter string 2: "
read str2

if [ -z "${str1}" ]                #  -z is zero 
then 
    echo "string 1 is empty"
else
    echo "string is not empty"
fi

echo ":$str:"

if [ -n "${str2}" ]               #  -n is non zero
then
   echo "string 2 is not empty"
else
   echo "string 2 is empty"
fi
