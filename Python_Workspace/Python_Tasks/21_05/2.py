#Removing duplicate variables in a list 

l=[1,2,2,4,5,7,5,3,3]
print("Original List",l)
s=set(l)
print("List to set conversion",s)
l=list(s)
print("Updated set to list ",l)
