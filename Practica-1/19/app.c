#include<stdio.h>
#include<stdlib.h>

#define NUM_PREGUNTAS 4

const char CALIFICACION[5] = {'E', 'D', 'C', 'B', 'A'};

int main() {
    int op1, op2, res, i, score = 00;
    printf("Evaluacion\n--------------------------------\n");
    for(i = 0; i < NUM_PREGUNTAS; i++) {
        op1 = rand() % 100;
        op2 = rand() % 100;
        printf("%d) %d + %d = ", i, op1, op2);
        scanf("%d", &res);
        if(res == (op1 + op2))
            score++;
    }
    printf("Puntaje final: %c\n", CALIFICACION[score]);
    return 0;
}