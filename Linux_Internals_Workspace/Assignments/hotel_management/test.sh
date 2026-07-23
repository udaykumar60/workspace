#!/bin/bash

echo "Enter a fruit:"
read user_fruit

arr=("apple" "banana" "cherry")
found=false             

for i in "${arr[@]}"; do
    if [ "$i" == "$user_fruit" ]; then
        found=true
        break
    fi
done

if [ "$found" = true ]; then
    echo "$user_fruit is in the list"
else
    echo "$user_fruit is not in the list."
fi
