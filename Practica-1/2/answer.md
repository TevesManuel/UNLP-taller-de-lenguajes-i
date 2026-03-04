a)El intercambio entre char e int no presenta warnings
b)float usa 4 bytes, es punto flotante su precision decimal es de 6-7 digitos y su rango es de 10^-38 a 10^38.
Y double usa 8 bytes es punto flotante, su precision decimal es 15-16, y su rango va desde 10^-308 a 10^308.
Ambos usan la IEEE754, float usa 8 bytes de exponente y 23 de mantisa. Mientras que double usa 11 bytes de exponente y 52 de mantisa.
c)No sucede nada.
d)sizeof es un operador de C usado para determinar la longuitud en bytes de una variable o tipo de dato.