% Hechos
es_hombre(jose).
es_hombre(tomas).
es_hombre(jaime).
es_hombre(juan).

es_mujer(clara).
es_mujer(isabel).
es_mujer(ana).
es_mujer(patricia).
es_mujer(maria).

es_padre_de(jose,ana).
es_padre_de(jose,patricia).
es_padre_de(tomas,jose).
es_padre_de(tomas,isabel).

es_madre_de(clara,jose).
es_madre_de(patricia,jaime).
es_madre_de(isabel,juan).
es_madre_de(patricia,maria).

% Reglas
es_abuela(X,Y) :- es_mujer(X), (es_madre_de(X,Z), es_padre_de(Z,Y)),X\=Y.
es_abuelo(X,Y) :- es_hombre(X), es_padre_de(X,Z), 
		(es_padre_de(Z,Y);es_madre_de(Z,Y)),X\=Y.
es_hermana_de(X,Y):- es_mujer(X),
		((es_padre_de(Z,X),es_padre_de(Z,Y));
		(es_madre_de(Z,X),es_madre_de(Z,Y))),
		X\=Y.
es_hermano(X,Y):- es_hombre(X),
		((es_padre_de(Z,X),es_padre_de(Z,Y));
		(es_madre_de(Z,X),es_madre_de(Z,Y))),
		X\=Y.
saludo :-
    write('¡Hola, mundo!'), nl.