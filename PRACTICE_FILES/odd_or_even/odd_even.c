/*Purpose: Program to check the given number is odd or even
           (Studying if -else)
  Date: 30-08-19 8:30 PM */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_to_test=0, remainder=0;

    printf(" Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    //Arithmetic Relation
    remainder=number_to_test%2;
    if (remainder == 0)
    {
        printf("\n The number is even \n");
    }
    else
    {
        printf(" The number is odd \n");
    }
    return (0);
}
