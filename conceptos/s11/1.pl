% Elaborado por Deybis Antonio Melendez Vargas
% Hechos
hombre(francisco).
hombre(mario).
hombre(eduardo).
hombre(luis).

mujer(victoria).
mujer(alicia).
mujer(veronica).
mujer(beatriz).

% Hijo/a, Padre, Madre
padres(alicia, francisco, victoria).
padres(eduardo, francisco, victoria).
padres(beatriz, mario, alicia).
padres(luis, eduardo, veronica).

% Esposo, Esposa
esposos(francisco, victoria).
esposos(mario, alicia).
esposos(eduardo, veronica).

% Reglas
abuelo(X, Y) :- padres(Y, Z, _), padres(Z, X, _), hombre(X).

abuela(X, Y) :- padres(Y, _, Z), padres(Z, _, X), mujer(X).

hermano(A, B) :- padres(A, P, M), padres(B, P, M), hombre(A), A \= B.

hermana(A, B) :- padres(A, P, M), padres(B, P, M), mujer(A), A \= B.

hijo(A, B) :- padres(A, B, _), hombre(A).
hijo(A, B) :- padres(A, _, B), hombre(A).

hija(A, B) :- padres(A, B, _), mujer(A).
hija(A, B) :- padres(A, _, B), mujer(A).
