#12. Grade Calculator

#Calculate grade based on marks.

#Example:

#90+ → A
#75+ → B
#50+ → C
#Below 50 → Fail

a=int(input("Enter marks:"))
if a>=90:
    print("A")
elif a>=75 and a<90:
    print("B")
elif a>=50 and a<75:
    print("C")
else:
    print("Fail")
