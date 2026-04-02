#include <stdio.h>
#include <stdlib.h>

int main() {
    //srand es set random seed, es una funcion que inicializa el generador de numero aleatorios rand
    //Si se llama a srand con el mismo valor, rand generará la misma secuencia de números aleatorios cada vez que se ejecute el programa
    //Osea que si dejaramos srand(cte) cada vez que ejecutamos el programa, obtendriamos la misma secuencia de numeros aleatorios
    //Si queremos que en cada ejecucion tenga resultados diferentes, podemos usar srand(time(NULL)) para inicializar la semilla con el tiempo actual.
    //Y asi obtener resultados diferentes cada vez que ejecutamos el programa.
    for(int i = 1; i <= 15; i++) {
        printf("%d\n", i);
        printf("%d\n", rand());
    }
    return 0;
}