import sympy as sp

x, t, u, y = sp.symbols("x t u y")

class Integral:
    def __init__(self, expresion, simbolo):
        self.expresion = expresion
        self.simbolo = simbolo
        self.solucion = sp.simplify(sp.integrate(self.expresion, self.simbolo))  # Simplificar la solución

ejercicios = [
    Integral(x**8, x),
    Integral(1 / sp.sqrt(x**6), x),
    Integral(x**sp.Rational(5,7), x),
    Integral(sp.root(x**2, 3), x),
    Integral(4 / sp.sqrt(t), t),
    Integral(1 / sp.sqrt(2*x**3), x),
    Integral((x**3) * sp.sqrt(x), x),
    Integral(u**3 - 2*u + 7, u),
    Integral(x**-3 + sp.sqrt(x) - 3*x**sp.Rational(1,4) + x**2, x),
    Integral(x**sp.Rational(2,3) - 4*x**sp.Rational(-1,5) + 4, x),
    Integral(7 / y**sp.Rational(3,4) - sp.root(y, 3) + 4 * sp.sqrt(y), y),
    Integral(2 + y**2, y),
    Integral(x * (1 + x**3), x),
    Integral((1 + x**2) * (2 - x), x),
    Integral(x**sp.Rational(1,3) * (2 - x)**2, x)
]

def mostrar_menu():
    print("Seleccione el número del ejercicio para verlo:")
    print("0. Salir")
    for i in range(len(ejercicios)):
        print(f"{i + 1}. Ejercicio {i + 1}")

def mostrar_integral(i):
    ej = ejercicios[i - 1]
    print(f"\nEjercicio {i}:")
    print(f"{sp.pretty(ej.expresion, use_unicode=True)} d{ej.simbolo}")
    print("Solución:")
    print(f"{sp.pretty(ej.solucion, use_unicode=True)}")
    print("-" * 40)

while True:
    mostrar_menu()
    opcion = input("Seleccione una opción: ")

    if opcion == '0':
        print("Saliendo del programa...")
        break
    elif opcion.isdigit() and 1 <= int(opcion) <= len(ejercicios):
        mostrar_integral(int(opcion))
    else:
        print("Opción no válida. Intente de nuevo.")