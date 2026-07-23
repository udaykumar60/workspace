#14. Character Checker

#Check whether character is:

#Alphabet
#Digit
#Special Character

b=chr(input("Enter character:"))
a=int(b)
if a>=65 or a<=90 or a>=97 or a<=122:
    print("Alphabet")
elif a>=48 or a<=57:
    print("Digit")
else:
    print("Special Character")


