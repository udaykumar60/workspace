#Fibonacci Series upto nth term 
a=int(input("Enter the nth term:"))
x=0
y=1
for i in range(0,a+1):
  print(x)
  z=x+y
  x=y
  y=z
