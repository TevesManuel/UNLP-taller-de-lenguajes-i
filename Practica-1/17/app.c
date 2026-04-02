#include <stdio.h>

void nFlotMinMax() {
    float min = 10e8;
    float max = 0;
    float num;
    int n;
    printf("Ingrese n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    printf("Mínimo: %f\n", min);
    printf("Máximo: %f\n", max);
}

int main() {
    nFlotMinMax();
    return 0;
}