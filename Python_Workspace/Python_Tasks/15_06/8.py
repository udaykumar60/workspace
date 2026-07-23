#Prime number within a given range
a=int(input("Enter the start range: "))
b=int(input("Enter the end range: "))
for i in range (a,b+1,1):
  count=0
  for j in range (1,i+1):
    if(i%j==0):
      count+=1
  if(count==2):
        print(i,"is a Prime Number")

