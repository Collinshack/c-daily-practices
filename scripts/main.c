#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1;
    printf("Enter first num: \n");
    scanf("%d", &number1);
    int number2;

    printf("Enter second num: \n");

    scanf("%d", &number2);
    int number3;
    printf("Enter third num: \n");

    scanf("%d", &number3);
    printf("Here is the total number you entered: %d", number1+number2/number3);
    return 0;
}
