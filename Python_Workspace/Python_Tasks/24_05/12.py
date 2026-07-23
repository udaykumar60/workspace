#9. Multiple of 2 or 7

#Check whether a number is multiple of 2 or 7.

a=int(input("Enter n:"))
if a%2==0:
    print(a,"is multiple of 2")
elif a%7==0:
    print(a,"is multiple of 7")

else:
    print(a,"is not multiple by 2 and 7")

