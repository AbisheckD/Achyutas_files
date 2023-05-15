#!/bin/bash

echo "total no. of arguments: $#"
echo "Argument list: $@"
echo "Argument list: $*"

for ARG in $@
do 
  echo $ARG
done
