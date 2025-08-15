import re

booleans = (True, False)

def print_table(expr, formatted_expr):
    print()
    print(f"--- Tabla de verdad para la expresión {expr} ---")
    print(f"p\tq\t{expr}")
    for p in booleans:
        for q in booleans:
            context = {"p": p, "q": q}
            print(f"{p}\t{q}\t{eval(formatted_expr, context)}")

def format_expression(expr):
    expr = re.sub(
        r"([pq¬\(\)\s]+)\s*→\s*([pq¬\(\)\s]+)",
        r"(not \1) or \2",
        expr
    )

    expr = re.sub(r"¬\s*p", "(not p)", expr)
    expr = re.sub(r"¬\s*q", "(not q)", expr)
    expr = re.sub(r"¬\s*\(", "not (", expr)

    replacements = {
        "∧": " and ",
        "v": " or ",
        "↔": " == "
    }
    for symbol, py_op in replacements.items():
        expr = expr.replace(symbol, py_op)

    return expr

# Mostrar símbolos
print("--- Simbología ---")
print("Negación: ¬")
print("Conjunción: ∧")
print("Disyunción: v")
print("Condicionante: →")
print("Bicondicionante: ↔")
print("----")

# Ejemplo: ¬(¬p → ¬q) ↔ q
expression = input("Escriba la expresión. Ejemplo: p → q:\n")
new_expression = format_expression(expression)
print_table(expression, new_expression)
