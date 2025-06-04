#include <stdio.h>
#include "functions.h"
#include "labels.h"

double sum(double *num1, double *num2)
{
    return *num1 + *num2;
}

double subtract(double *num1, double *num2)
{
    return *num1 - *num2;
}

double multiply(double *num1, double *num2)
{
    return *num1 * *num2;
}

double divide(double *num1, double *num2)
{
    return *num1 / *num2;
}

void showResult(short *operation, double *num1, double *num2, double *result)
{
    printf("The result of the operation %hd with the values %lf and %lf is %lf\n",
           *operation, *num1, *num2, *result);
}

int main()
{
    short flag = 1;

    printf(AVAILABLE_OPERATIONS);

    while (flag == 1)
    {

        double num1, num2, result;
        short operation;

        printf(ASK_OPERATION);
        if (scanf("%hd", &operation) != 1)
        {
            printf(ERROR_INPUT_NOT_NUMBER);
            continue;
        }

        printf(ASK_FIRST_VALUE);
        if (scanf("%lf", &num1) != 1)
        {
            printf(ERROR_INPUT_NOT_NUMBER);
            continue;
        }
        printf(ASK_SECOND_VALUE);
        if (scanf("%lf", &num2) != 1)
        {
            printf(ERROR_INPUT_NOT_NUMBER);
            continue;
        }

        if (operation == DIVISION)
        {
            if (num2 == 0)
            {
                printf(ERROR_DIVIDE_BY_ZERO);
                continue;
            }
        }

        // Operations menu
        if (operation == SUMMATION)
        {
            result = sum(&num1, &num2);
        }
        else if (operation == SUBTRACTION)
        {
            result = subtract(&num1, &num2);
        }
        else if (operation == MULTIPLICATION)
        {
            result = multiply(&num1, &num2);
        }
        else if (operation == DIVISION) // Constrainsts: division by zero
        {
            result = divide(&num1, &num2);
        }
        else
        {
            printf(ERROR_OPERATION_DOES_NOT_EXIST);
            continue;
        }

        showResult(&operation, &num1, &num2, &result);
    };

    return 0;
}