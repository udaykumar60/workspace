#Reverse of a number
a=int(input("Enter the number:"))
x=0
while a>0:
  r=a%10
  x=x*10+r
  a=a//10
print("Reverse of a number:",x)
