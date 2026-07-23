#13.Leap Year Checker

#Check whether a year is leap year.

a=int(input("Enter the year:"))
if a%4==0 and a%100==0:
    print("Leap Year")
else:
    print("Not Leap Year")
