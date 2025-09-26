#include <stdio.h>
#define swap(x, y) {int temp=x; x=y; y=temp;}

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Values of two numbers before swap: number 1: %d, number 2: %d.\n\n", num1, num2);


    swap(num1, num2);

    printf("Values of two numbers now: number 1: %d, number 2: %d.\n", num1, num2);
    return 0;
}