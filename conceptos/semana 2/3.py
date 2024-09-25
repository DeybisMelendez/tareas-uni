peso_kg = input("Ingrese su peso en kg: ")
altura_m = input("Ingrese su altura en metros: ")

peso_kg = float(peso_kg)
altura_m = float(altura_m)

IMC = peso_kg / (altura_m ** 2)

print(f"Su IMC es: {IMC}")