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
op = input(f"Scegli l'operazione. Scegli tra: {allowedOps}")

if op in allowedOps:
    print("Operazione scelta valida")
else:
    print("Operazione scelta non valida")