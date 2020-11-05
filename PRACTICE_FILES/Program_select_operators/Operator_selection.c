/*Purpose: Program for finding the solution of four basic operators(+,-,*,/) at once
           (Program includes switch operations also if else)
  Date: 31-08-19 12:00 PM */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float value1, value2;
    char operatr;

    printf(" Type in your expression \n");
    scanf("%f %c %f", &value1, &operatr, &value2);

    switch (operatr)
    {
    case '+':
        printf(" %.2f \n", value1+value2);
        break;

    case '-':
        printf(" %.2f \n", value1-value2);
        break;

    case '*':
        printf(" %.2f \n", value1*value2);
        break;

    case '/':
        {
            if (value2==0)
                printf(" Division by Zero \n");
            else
                printf(" %.2f \n", value1/value2);
        }
        break;

    default:
        printf(" Unknown operator \n");
        break;
    }
    return (0);
}
