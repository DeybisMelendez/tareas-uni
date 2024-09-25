# Solicito al usuario los lados del triángulo
lado_1 = float(input("Ingrese el primer lado: "))
lado_2 = float(input("Ingrese el segundo lado: "))
lado_3 = float(input("Ingrese el tercer lado: "))
# Por descarte el triángulo sería ESCALENO
triangulo = "ESCALENO"

# Si los 3 lados son iguales es equilátero
if lado_1 == lado_2 and lado_2 == lado_3:
    triangulo = "EQUILÁTERO"
# Si 2 lados son iguales es isósceles
elif lado_1 == lado_2 or lado_2 == lado_3 or lado_1 == lado_3:
    triangulo = "ISOSCELES"

print(f"Es un triángulo {triangulo}.")