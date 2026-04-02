#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Ingrese el primer operador: ");
    scanf("%f", &a);
    printf("Ingrese el segundo operador: ");
    scanf("%f", &b);
    printf("Ingrese la operacion ( +, -, *, / ): ");
    scanf(" %c", &op);
    switch (op)
    {
        case '+':
            printf("El resultado es: %f\n", a + b);
            break;
        case '-':
            printf("El resultado es: %f\n", a - b);
            break;
        case '*':
            printf("El resultado es: %f\n", a * b);
            break;
        case '/':
            printf("El resultado es: %f\n", a / b);
            break;
        default:
            printf("Operacion no valida\n");
            break;
    }
    return 0;
}