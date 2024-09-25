# Ejercicio 2
# Elaborado por Deybis Melendez

password = input("Ingrese una contraseña: ")
intentos = 3

while intentos > 0:
    if input("Escriba su contraseña: ") == password:
        break
    intentos -= 1
    print(f"Contraseña incorrecta!, le quedan {intentos} intentos.\n")

if intentos > 0:
    print("\nContraseña correcta\nBienvenido")
else:
    print("\nSe le acabaron los intentos")