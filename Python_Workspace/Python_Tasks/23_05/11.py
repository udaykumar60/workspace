#Check whether a number is divisible by 5 and 3

a=int(input("Enter the number to check divisibility:"))
if(a%5==0 and a%3==0):
    print(a,"is divisible by both 5 and 3 ")
else:
    print("NOT DIVISIBLE ")
