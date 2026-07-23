#Palindrome number
a=int(input("Enter the number:"))
b=a
x=0
while a>0:
  r=a%10
  x=x*10+r
  a=a//10
if(x==b):
  print(b,"=",x,"is a Palindrome number")
else:
  print(b,"!=",x,"is not a Palindrome number")
