% Hechos (relaciones directas)
padre(rafael, victor).
padre(rafael, teresa).
padre(rafael, daniel).
padre(isabela, victor).
padre(isabela, teresa).
padre(isabela, daniel).
padre(victor, mario).
padre(daniel, caroline).
padre(ivette, caroline).
padre(nayeli, mario).

% Reglas
abuelo(A, B) :-
    padre(A, X),
    padre(X, B).

abuela(A, B) :-
    padre(A, X),
    padre(X, B).

tio(A, B) :-
    padre(X, B),
    hermanos(A, X).

tia(A, B) :-
    padre(X, B),
    hermanos(A, X).

hermanos(X, Y) :-
    padre(Z, X),
    padre(Z, Y),
    X \= Y.

primo(X, Y) :-
    padre(A, X),
    padre(B, Y),
    hermanos(A, B).

prima(X, Y) :-
    padre(A, X),
    padre(B, Y),
    hermanos(A, B).