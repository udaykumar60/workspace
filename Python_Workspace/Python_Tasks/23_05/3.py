#Convert days into years and months

a=int(input("Enter the days to convert into days and months:"))
b=a//365;
c=a-(b*365)
d=c//30.42
print(b,"years",c,"days")
