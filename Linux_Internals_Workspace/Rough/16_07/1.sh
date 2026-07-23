#!/bin/bash


echo Enter the n to print till the number
read a
for i in $(eval echo {1..$a})
do
    echo $i
done
