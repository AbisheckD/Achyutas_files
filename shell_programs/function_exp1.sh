#!/bin/bash

function hello_print()
{
  SUM=`expr $1 + $2`
  echo $SUM
}

hello_print 10 20

RESULT1=`hello_print 100 200`
echo $RESULT1
