a) Para representar enteros usaria el tipo de dato int.

b) Pueden usarse los modificadores short, long, long long, unsigned.

c) Para ver el tamanio de cada modificador de int hice un pequenio programa:
```C
#include <stdio.h>
int main() {
    short int shortInt = 100;
    int simpleInt = 100;
    unsigned unsignedInt = 100;
    long int longInt = 100;
    long long int longLongInt = 100;
    printf("short int: %zd\n", sizeof(shortInt));
    printf("int: %zd\n", sizeof(simpleInt));
    printf("unsigned int: %zd\n", sizeof(unsignedInt));
    printf("long int: %zd\n", sizeof(longInt));
    printf("long long int: %zd\n", sizeof(longLongInt));
    return 0;
}
```
Y su salida fue:
```bash
short int: 2
int: 4
long int: 8
long long int: 8
```
Teniendo en cuenta su salida y el modificador, podemos determinar su rango y sistema de representacion
Todos los enteros con signo sin importar su longuitud se representan con complemento a 2 ( Ca2 ).
Y todos los enteros con el modificador unsigned se representan en binario puro 2^n.
Para saber el rango de Ca2.
Minimo = -2^(n-1);
Maximo = 2^(n-1)-1;
Y para saber el rango de Binario puro:
Minimo = 0;
Maximo = 2^n;

d)