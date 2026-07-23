#Find the Nth Term of the Fibonacci Series 
a=int(input("Enter the nth term:"))
x=0
y=1
for i in range(0,a+1):
  z=x+y
  x=y
  y=z
print("Find the Nth Term of the Fibonacci Series",x)
