#!/bin/bash

echo -n "Black hole is bigger than our sun (Enter: True or False) : "
read usr_ip

case $usr_ip in
     True | TRUE | true) echo "Congrats, You are correct" ;;
     False | FALSE | false) echo "Sorry, You are wrong, better luck next time " ;;
     *) echo "Please enter either True or False" ;;
esac
