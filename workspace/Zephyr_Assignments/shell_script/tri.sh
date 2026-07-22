#!/bin/bash
echo "Enter side A:"
read a
echo "Enter side B:"
read b
echo "Enter side C:"
read c
if [ $((a + b)) -le $c ] || [ $((a + c)) -le $b ] || [ $((b + c)) -le $a ]; then
    echo "Error: These sides cannot form a valid triangle."
    exit 1
fi
if [ $a -eq $b ] && [ $b -eq $c ]; then
    echo "This is an Equilateral triangle (all sides are equal)."
elif [ $a -eq $b ] || [ $b -eq $c ] || [ $a -eq $c ]; then
    echo "This is an Isosceles triangle (two sides are equal)."
else
    echo "This is a Scalene triangle (all sides are different)."
fi
