#include<stdio.h>
int damePar() {
    static int n = 0;
    n += 2;
    return n-2;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", damePar());
    }
    printf("\n");
    return 0;
}