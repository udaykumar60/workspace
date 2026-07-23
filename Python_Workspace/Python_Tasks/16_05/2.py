#Harshad number
a=int(input("Enter the number:"))
b=a
sum=0
while a>0:
  r=a%10
  sum=sum+r
  a=a//10
if b%sum==0:
  print(b,"is a Harshad number")
else:
  print(b,"is not a Harshad number")
