#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Program for calculator

int main(int argc, char *argv[]) 
{
    float num1;
    float num2;
    char operator;
    float result;

    printf("\nEnter Calculation: ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    case '^':
        result = pow(num1, num2);
        break;

    case ' ':
        result = sqrt(num2);
        break;
    
    default: goto fail;
        break;
    }

    printf("%.9g%c%.9g = %.9g\n\n", num1,operator,num2, result);
    goto exit;

    fail:
    printf("Error\n");

    exit:
    return (0);
}