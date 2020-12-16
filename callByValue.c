#include <stdio.h>
//function declaration
int max(int num1, int num2);
int min(int num1, int num2);
void main()
{
    //declaring variables
    int num1, num2, maximum, minimum;
    //input line
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    //function defintion
    int max(int num1, int num2){
    return (num1 > num2 ) ? num1 : num2;
    }
    int min(int num1, int num2){
    return (num1 > num2 ) ? num2 : num1;
    }

    //function call
    maximum = max(num1, num2);
    minimum = min(num1, num2);

    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);

}
