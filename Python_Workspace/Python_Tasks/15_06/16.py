#Factorial of a number
a=int(input("Enter the number:"))
sum=1
for i in range (1,a):
  sum=sum*i+sum
print("Factorial of a number:",sum)
