#Create simple calculator using conditions

print("======================== CALCULATOR ========================")
print("1. ADD")
print("2. SUB")
print("3. MUL")
print("4. DIV")
a=input("Enter the choice:")
if(a=='1'):
    x=float(input("Enter the value of first number:"))
    y=float(input("Enter the value of the second number:"))
    print("Add of two numbers is:",x+y)
elif(a=='2'):
    x=float(input("Enter the value of first number:"))
    y=float(input("Enter the value of the second number:"))
    print("Sub of two numbers is:",x-y)
elif(a=='3'):
    x=float(input("Enter the value of first number:"))
    y=float(input("Enter the value of the second number:"))
    print("Mul of two numbers is:",x*y)
elif(a=='4'):
    x=float(input("Enter the value of first number:"))
    y=float(input("Enter the value of the second number:"))
    print("Div of two numbers is:",x/y)
else:
    print("INVALID")


