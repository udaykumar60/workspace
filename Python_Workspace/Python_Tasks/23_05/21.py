#Increase student marks by bonus marks

a=int(input("Enter the marks:"))
if(a>0 and a<50):
    print("Marks scored:",a,"Bonous Marks:",2,"\nTotal Marks:",a+2)
elif(a>50 and a<70):
    print("Marks scored:",a,"Bonous Marks:",5,"\nTotal Marks:",a+5)
elif(a>70 and a<90):
    print("Marks scored:",a,"Bonous Marks:",7,"\nTotal Marks:",a+7)
elif(a>90 and a<101):
    print("Marks scored:",a,"Bonous Marks:",100,"\nTotal Marks:",a+100)
else:
    print("HOW MANY MANY U NEED BRO")

