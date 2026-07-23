#Reduce product price after discount

a=int(input("Enter the price:"))
if(a>0 and a<500):
    print("Original Price:",a,"Discount:",10,"\nAfter Discount:",a-10)
elif(a>500 and a<1000):
    print("Original Price:",a,"Discount:",30,"\nAfter Discount:",a-30)
elif(a>1000 and a<1500):
    print("Original Price:",a,"Discount:",50,"\nAfter Discount:",a-50)
elif(a>1500 and a<2000):
    print("Original Price:",a,"Discount:",70,"\nAfter Discount:",a-70)
else:
    print("NO DISCOUNT FOR YOU")

