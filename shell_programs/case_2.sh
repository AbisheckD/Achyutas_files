#!/bin/bash

echo -n "Enter a character: "
read c

case $c in
   a | A) echo "You entered $c which is a vowel" ;;
   e | E) echo "You entered $c which is a vowel" ;;
   i | I) echo "You entered $c which is a vowel" ;;
   o | O) echo "You entered $c which is a vowel" ;;
   u | U) echo "You entered $c which is a vowel" ;;
   *) echo "You have entered a consonent" ;;
esac
