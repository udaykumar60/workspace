#Leap year or not
a=int(input("enter the year:"))
if((a%4==0 and a%100!=0 or a%400==0)):
  print("Its a Leap year")
else:
  print("Not a leap year")
