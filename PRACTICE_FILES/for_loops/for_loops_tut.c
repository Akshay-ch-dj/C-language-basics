/*Purpose: SUM OF FIRST N INTEGERS
            program to study about for loops
           (Program uses for loop, examines its functions
            of initialize;check;modify )
  Date: 02-09-19 1:30 PM */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum=0LL; //to store the sum of variables
    unsigned int count=0;       // To cont the no. of integers

    //Read data from user
    printf(" \nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    //sum integers from 1 to the count
    for (unsigned int i=1; i<=count; ++i)
    {
        printf("\n iteration count display\n");
        sum +=i;
    }

    //Display
    printf("\n Total of the first %u numbers is %llu \n", count, sum);

    return (0);
}
