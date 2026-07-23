#changing tuple to list, to change the value
t=(10,20,"hi")
temp=list(t)
temp[2]=30
print("List data is :", temp)
t=tuple(temp)
print("After changing to tuple:",t)
