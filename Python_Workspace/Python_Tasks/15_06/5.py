#Greatest of the Three numbers
x=input("Enter 1st number:")
y=input("Enter 2nd number:")
z=input("Enter 3rd number:")
if(x>y and x>z):
  print(x,"is greater")
elif(x<y and y>z):
  print(y,"is greater")
else:
  print(z,"is greater")
