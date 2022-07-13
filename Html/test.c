#include <stdio.h>
#include <stdlib.h>

void printMessage();
int sum(int,int);
int factorial(int);
int main()
{

    int a = 10, b = 20;
    print("%d\n",sum(a,b));
    int fact = factorial(5);
    printf("%d",fact);
    return 0;
}

void printMessage() {
    printf("hello this is najish eqbal ansari");
}

int sum(int a,int b) 
{
    return a + b;
}

int factorial(int number) {
    if(number == 1) return 1;
    return number * factorial(number - 1);
}
