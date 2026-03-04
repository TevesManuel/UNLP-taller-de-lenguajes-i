#include <stdio.h>
int main() {
    short int shortInt = 100;
    int simpleInt = 100;
    unsigned unsignedInt = 100;
    long int longInt = 100;
    long long int longLongInt = 100;
    printf("short int: %zd\n", sizeof(shortInt));
    printf("int: %zd\n", sizeof(simpleInt));
    printf("unsigned int: %zd\n", sizeof(unsignedInt));
    printf("long int: %zd\n", sizeof(longInt));
    printf("long long int: %zd\n", sizeof(longLongInt));
    return 0;
}