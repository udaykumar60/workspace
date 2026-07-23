#Prime number
a=int(input("Enter the number: "))
count=0
for i in range (1,a+1):
  if(a%i==0):
    count+=1
if(count==2):
  print(a,"is a Prime Number")
else:
  print(a,"is not a Prime Number")
