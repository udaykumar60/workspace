#Strong number
a=int(input("Enter the number:"))
b=a
num=0
while a>0:
  r=a%10
  sum=1
  for i in range(1,r+1):
    sum=sum*i
  num=num+sum
  a=a//10
if num==b:
  print(b,"=",num,"is a Strong number")
else:
  print(b,"!=",num,"is not a Strong number")
