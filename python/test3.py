strType = type("sono una stringa")
intType = type(5)
floatType = type(5.58)
boolType = type(True)

print(strType)
print(intType)
print(floatType)
print(boolType)

inputStr = input("Inserisci una stringa: ")

print("Il primo carattere è", inputStr[0])
print("Il sesto carattere è", inputStr[5])
print("L'ultimo carattere è", inputStr[-1])


print("Ciao" * 3)

name = "Hello, World!"

print(name[0])
print(name[-1])
print(name[4])

print(name[0:5])
print(name[:5])
print(name[7:12])
print(name[7:])

print(name[-6:-1:2])
print(name[::])

list1 = [["SubList1", "SubList2", ["SubList3_1", "SubList3_2" ]], "List1", 85]

print(list1[0])         # ["SubList1", "SubList2", ["SubList3_1", "SubList3_2" ]]
print(list1[2])         # 85
print(list1[-1])        # 85
print(list1[0][2][1])       # "SubList3_2"

list1[2] = 1052

print(list1[2])         # 1052

list1[-1] = 'ultimo elemento'

print(list1[-1])         # "ultimo elemento"

list1Lenght = len(list1)

print("List1 has", list1Lenght, "items")

print(type(list1))
