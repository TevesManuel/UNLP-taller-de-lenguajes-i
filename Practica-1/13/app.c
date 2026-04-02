#include<stdio.h>
#include<stdbool.h>
//a)
bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
//b)
int main() {
    int primes = 0;
    int num;
    while(primes < 5) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if(isPrime(num)) {
            printf("%d is a prime number.\n", num);
            primes++;
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }
}