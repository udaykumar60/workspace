#Friendly pair 
a=int(input("Enter the 1st number:"))
b=int(input("Enter the 2nd number:"))
x=y=0
for i in range (1,a+1):
  if a%i==0:
    x=x+i
print(x)
for j in range (1,b+1):
  if b%j==0:
    y=y+j
print(y)
p=x/a
q=y/b
print(p,q)
if p==q:
  print(a,"and",b,"are Friendly pair")
else:
  print(a,"and",b,"are not Friendly pair")
