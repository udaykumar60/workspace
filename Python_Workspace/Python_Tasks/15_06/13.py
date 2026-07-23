#Armstrong number in a given range
a=int(input("Enter the start range:"))
y=int(input("Enter the end range:"))
for i in range(a,y+1):
    b=c=i
    n=0
    x=0
    while b>0:
      n+=1
      b=b//10
    b=i
    while c>0:
      r=c%10
      x=(r**n)+x
      c=c//10
    if(b==x):
      print(b,"=",x,"is a Armstrong number")
