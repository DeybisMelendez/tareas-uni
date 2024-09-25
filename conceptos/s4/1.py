# Ejercicio 1
# Elaborado por Deybis Melendez

num = int(input("Ingrese un número positivo: "))
suma = 0
promedio = 0
pares = 0
impares = 0

for i in range(1, num + 1):
    suma += i
    if i % 2 == 0:
        pares += 1
    else:
        impares += 1

promedio = suma / num

print(f"Usted ingresó el número: {num}, la suma es: {suma}, el promedio es: {promedio}.")
print(f"Tiene {pares} números pares y {impares} números impares.")