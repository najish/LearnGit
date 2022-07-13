#include <stdio.h>
#include <stdlib.h>


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



int sum(int a,int b) 
{
    return a + b;
}

int factorial(int number) {
    if(number == 1) return 1;
    return number * factorial(number - 1);
}