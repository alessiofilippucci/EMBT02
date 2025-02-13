

i = int(input("Enter a number: "))

if (i > 0):
    print ("Number is positive")
elif (i < 0):
    print ("Number is negative")
else:
    print ("Number is zero")


# if(i >= 0):
#     if(i == 0):
#         print("Number is zero")
#     else:
#         print("Number is positive")
# else:
#     print("Number is negative")


if (i == 0):
    print("Number is zero")
else:
    if(i >= 0):
        if (i % 2 == 0): 
            print("Number is even and positive")
        else:
            print("Number is odd and positive")
    else:
        if (i % 2 == 0): 
            print("Number is even and negative")
        else:
            print("Number is odd and negative")
    

res = None



if (i % 2 == 0): print("Number is even")

print("Number is even") if (i % 2 == 0) else print("Number is odd")