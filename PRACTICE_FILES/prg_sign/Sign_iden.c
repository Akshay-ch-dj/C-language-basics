/*Purpose: Program to check the sign of a given number
           (Studying if -else)
  Date: 30-08-19 8:45 PM */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0, sign=0;

    printf(" Please type in a number:");
    scanf("%i",&number);

    if (number<0)
    {
        sign=-1;
    }
    else if (number == 0)
    {
        sign=0;
    }
    else
    {
        sign=1;
    }
    printf("sign = %i\n", sign);

    return (0);
}
