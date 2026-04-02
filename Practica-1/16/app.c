#include <stdio.h>

// void swap(int a, int b)
// {
//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp; 
// }
// El error es que se pasan por valor ( copias ),
// y no se accede a las variables originales,
// la solucion correcta es pasar por referencia.
// En C se pasa por valor la direccion de memoria de la variable.

void swap(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp; 
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("x=%d\ty=%d\n",x,y);
    swap(&x, &y);
    printf("x=%d\ty=%d\n",x,y);
    return 0;
}