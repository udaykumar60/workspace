#Armstrong number
a=int(input("Enter the number:"))
b=c=a
n=0
x=0
while a>0:
  n+=1
  a=a//10
while c>0:
  r=c%10
  x=(r**n)+x
  c=c//10
if(b==x):
  print(b,"=",x,"is a Armstrong number")
else:
  print(b,"!=",x,"is a Armstrong number")
