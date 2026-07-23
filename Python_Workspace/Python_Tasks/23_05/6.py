#Find compound interest

p=int(input("Enter the principal amount:"))
r=float(input("Enter the rate of interest:"))
t=int(input("Ente rthe time in years:"))
n=int(input("enter the years for the interest to compund:"))
r=(r/100)
a=(1+(r/n))
b=(a**(n*t))
A=(p*b)
print("th Compound interest is:",(A-p))

