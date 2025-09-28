#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1 =0, num2 =0, division =0, remainder =0;

    printf("Enter a first natural number:\n ");
    scanf("%d", &num1);

    printf("Enter a second natural number:\n ");
    scanf("%d", &num2);

    division = num1 / num2;
    remainder = num1 % num2;

    printf("\nResults:\n");
    printf("integer division result = %d\n", division);
    printf("remainder = %d\n", remainder);

    return 0;
}
