#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 2
 * ----------------------------------------
 * Read two integers (a and b) from the user and print their product (a * b).
 */

int main(void){

    int num1 =0, num2 =0, product =0;

    printf("Enter a natural number: ");
    scanf("%d", &num1);

    printf("Enter another natural number:\n ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("The product is = %d\n", product);

    return 0;
}
