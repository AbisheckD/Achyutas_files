#!/bin/bash

echo -n "Enter the small character: "
read c

case $c in
    a) echo "$c is a vowel" ;;      #  ;; to terminate the program acts as a break
    e) echo "$c is a vowel" ;;
    i) echo "$c is a vowel" ;; 
    o) echo "$c is a vowel" ;;
    u) echo "$c is a vowel" ;;
    *) echo "you have entered consonent"
esac
