#Create mini login system with 3 attempts

x=1234
count=0
while(count<3):
    print("username:yash")
    a=int(input("Password:"))
    if(x==a):
          print("Log In")
          count=3
    if(x!=a):
        count=count+1
