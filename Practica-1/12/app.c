#include<stdio.h>
#include<math.h>

int main() {
    for(float i = 0.0; i <= 10.0; i += 1) {
        printf("i: %f\n", i);
        printf("i^2: %f\n", pow(i, 2));
        printf("i^1/2: %f\n", pow(i, 0.5));// pow(i, 0.5) is equivalent to sqrt(i)
        printf("-----------------------------------------------\n");// pow(i, 0.5) is equivalent to sqrt(i)
    }
    return 0;
}