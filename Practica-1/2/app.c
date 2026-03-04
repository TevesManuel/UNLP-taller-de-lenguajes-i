#include <stdio.h>
int main(){
char c= 'a';
int x= 64;
x = 2*32+10%2-1;
float f = 4.3;
double d = 3.2;
f = d;
d = f;
printf("char c= %c\n", x);
printf("int x= %d\n", c);
return 0;
}