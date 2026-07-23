#Factor of a number
a=int(input("enter the number:"))
for i in range (1,a+1):
  if a%i==0:
    print("Factors of",a,"are:",i)
