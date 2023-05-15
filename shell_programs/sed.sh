#!/bin/bash


echo "i am in green" | sed ''/green/s//`printf "33[32mgreen33[0m"`/''
echo "I am in GREEN" | sed ''/GREEN/s//`printf "33[32mGREEN33[0m"`/''
