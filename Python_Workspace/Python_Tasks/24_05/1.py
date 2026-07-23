#Create electricity bill reduction using -=

a=int(input("Enter the amount:"))
if a>50 and a<150:
    a-=5
    print("The amount to be paid is:",a)
if a>150 and a<500:
    a-=10
    print("The amount to be paid is:",a)
if a>500 and a<1000:
    a-=15
    print("The amount to be paid is:",a)
else:
    a-=20
    print("The amount to be paid is :",a)
    

