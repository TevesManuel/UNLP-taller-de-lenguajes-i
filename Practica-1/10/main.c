#include <stdio.h>

int main() {
    int i = 0;
    for (; i<5;) {// Se ejecuta 5 veces, similar a un while
        i++;
        printf("asd\n");
    }
    for(;;) {// Se ejecuta infinitamente, similar a un while(true)
        printf("dsa\n");
    }
}