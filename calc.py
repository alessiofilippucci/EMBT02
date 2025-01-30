#TEST
allowedOps = ["+", "-", "/", "*"]
op = input(f"Scegli l'operazione. Scegli tra: {allowedOps}")

if op in allowedOps:
    num1 = input("Inserisci il primo numero: ")
    num2 = input("Inserisci il secondo numero: ")

    if num1.isdigit() and num2.isdigit():
        num1 = int(num1)
        num2 = int(num2)
        
        res = None

        if op == "+":
            res = num1 + num2
        elif op == "-":
            res = num1 - num2
        elif op == "*":
            res = num1 * num2
        elif op == "/":
            if num2 == 0:
                print(f"Divisione {num1}/0 impossibile")
            elif num1 == 0 and num2 == 0:
                print("Divisione 0/0 indefinita")
            else:
                res = num1 / num2
        else:
            print(f"Operzione {op} non ancora gestita")

        if res != None:
            #print(f'{num1} {op} {num2} = {res}')
            print(num1, op, num2, "=", res)
    else:
        print("Numeri inseriti non validi")
else:
    print("Operazione scelta non valida")

