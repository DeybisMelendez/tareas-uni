import sympy as sp

x = sp.Symbol("x")
y = sp.Symbol("y")

ejercicio = y
solucion = sp.integrate(ejercicio, y)

print(sp.pretty(sp.simplify(solucion)))