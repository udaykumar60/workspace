#Check whether number is multiple of 2 or 7

a=int(input("Enter the number:"))
if(a%2==0 and a%7==0):
    print(a,"is a multiple of both 2 and 7")
elif(a%2==0):
    print(a,"is a multiple of 2")
elif(a%7==0):
    print(a,"is a multiple of 7")
else:
    print(a,"is not multiple of 2 and 7")
