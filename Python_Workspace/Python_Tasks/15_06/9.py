#Sum of digits of a number
a=int(input("Enter the number: "))
sum=0
while a>0:
  r=a%10
  sum=sum+r
  a=a//10
print("Sum of digits of a number: ",sum)
