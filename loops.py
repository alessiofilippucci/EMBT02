# list1 = ['A', 'B', 23, True, "Ciao"]

# for listItem in list1:
#     print(listItem)


# for i in range(10):
#     print(i)

# num = 0

# while(num < 10):
#     print(num)
#     num +=1

# while(True):
#     print("Infinte loop")

allowedOps = ["+", "-", "/", "*",]
msg = f"Scegli l'operazione. Scegli tra: {allowedOps}"

op = input(msg)

while(op not in allowedOps):
    print("Operazione scelta NON valida")
    op = input(msg)

print("Operazione scelta valida")

