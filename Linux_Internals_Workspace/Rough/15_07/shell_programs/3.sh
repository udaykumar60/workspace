#!/bin/bash

read x
read y 
if  [ $x -gt $y ]
then
	echo $x is greater than $y
elif [ $x -eq $y ]
then
	echo $x is equal to $y 
elif [ $y -gt $x ]
then 
	echo $y is greater than $x
fi
