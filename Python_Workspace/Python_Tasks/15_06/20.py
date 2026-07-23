#Perfect NUmber
a=int(input("enter the number:"))
sum=0
for i in range (1,a):
  if a%i==0:
    sum=sum+i
if sum==a:
  print(a,"is a perefct number")
else:
  print(a,"is not a perfect number")
