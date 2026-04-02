#include<stdio.h>

int invert(int n) {
    int out = 0;
    while (n > 0) {
        out *= 10;
        out += n % 10;
        n /= 10;
    }
    return out;
}

int main() {
    printf("%d\n", invert(1234));
    printf("%d\n", invert(4321));
    printf("%d\n", invert(9876));
    return 0;
}