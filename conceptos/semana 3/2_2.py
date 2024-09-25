# Solicito al usuario los ángulos
angulo_1 = float(input("Ingrese el primer ángulo: "))
angulo_2 = float(input("Ingrese el segundo ángulo: "))
angulo_3 = float(input("Ingrese el tercer ángulo: "))

# Los ángulos deben sumar 180 grados
if angulo_1 + angulo_2 + angulo_3 == 180:
    # Por descarte el triángulo sería OBTUSÁNGULO
    triangulo = "OBTUSÁNGULO"
    # Si tiene 3 ángulos agudos (de 0 a 90 grados) es acutángulo
    # No existe un triángulo con dos ángulos de 90 grados
    # Por lo tanto el acutángulo debe tener ángulos menores a 90 grados
    if angulo_1 < 90 and angulo_2 < 90 and angulo_3 < 90:
        triangulo = "ACUTÁNGULO"
    # Si tiene un ángulo con exáctamente 90 grados es rectángulo
    elif angulo_1 == 90 or angulo_2 == 90 or angulo_3 == 90:
        triangulo = "RECTÁNGULO"

    print(f"El triangulo es {triangulo}.")
else:
    print("Los ángulos deben sumar 180 grados")