#11. Largest of Three Numbers

#Take three numbers and print the largest number.

a=float(input("Enter a:"))
b=float(input("Enter b:"))
c=float(input("Enter c:"))
if a>b and a>c:
    print("A is largest")
elif b>a and b>c:
    print("B is greater")
else:
    print("C is greater")

