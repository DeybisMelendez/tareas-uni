import re

booleans = (True, False)

def print_table(expr, formated_expr):
    print()
    print(f"--- Tabla de verdad para la expresión {expr} ---")
    print(f"p\tq\t{expr}")
    for p in booleans:
        for q in booleans:
            context = {
                "p": p,
                "q": q
            }
            print(f"{p}\t{q}\t{eval(formated_expr, context)}")

print("--- Simbología ---")
print("Negación: ¬")
print("Conjunción: ∧")
print("Disyunción: v")
print("Condicionante: →")
print("Bicondicionante: ↔")
print("----")

expression = input("Escriba la expresión. Ejemplo: p → q:\n")
new_expression = re.sub(   # Formateando expresión para Condicionante
    r"([pq¬]+)\s*→\s*([pq¬]+)",  # grupo1 = izquierda, grupo2 = derecha
    r"(not \1) or \2",     # reemplazo
    expression
)

new_expression = new_expression.replace("¬p", "(not p)")
new_expression = new_expression.replace("¬q", "(not q)")
new_expression = new_expression.replace("¬(", "not (")
new_expression = new_expression.replace("∧", " and ")
new_expression = new_expression.replace("v", " or ")
new_expression = new_expression.replace("↔", " == ")

print_table(expression, new_expression)
