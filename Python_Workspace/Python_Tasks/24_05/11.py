#8. Divisible by 5 and 3

#Check whether a number is divisible by both 5 and 3.

a=int(input("Enter n:"))
if a%5==0 and a%3==0:
    print(a,"is divisible by 5 and 3")
else:
    print(a,"is not divisible by 5 and 3")
