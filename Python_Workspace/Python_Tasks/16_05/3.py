#Abundant number
a=int(input("Enter the number:"))
sum=0
for i in range (1,a):
  if a%i==0:
    sum=sum+i
if sum>a:
  print(a,"is a Abundant number")
else:
  print(a,"is not a Abundant number")
