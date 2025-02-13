first_name = input("Inserisci il tuo nome:\n")
last_name = input("Inserisci il tuo cognome:\n")
ageAsText = input("Inserisci la tua età:\n")
age = int(ageAsText)

#print("Ciao, sono " + first_name + " " + last_name + " e ho " + str(age) + " anni")
print("Ciao, sono", first_name, last_name, "e ho", age, "anni", sep = "_", end="|||")





