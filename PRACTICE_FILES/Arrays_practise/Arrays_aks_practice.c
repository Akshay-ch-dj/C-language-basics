/*Purpose: Program for finding the average of 10 user entered nos.
           (Program uses for loop, ARRAY READ&WRITE)
  Date: 03-08-19 5:45 PM */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades[10];   //Array of size 10
    int count=10;     //No. of values
    long sum = 0;     //sum of the numbers
    float average = 0.0f;  //Avg. of numbers

    printf(" \nEnter the 10 grades: \n");   // Prompt for the input

    //For reading the 10 nos. to be averaged.
    for(int i=0;i<count;++i)
    {
        printf("%2u>", i+1); // This item is to display the serial numbers in each line
        scanf("%d", &grades[i]); //This command saves the values as each element of array
        sum+=grades[i];   //initial value of sum=0, as value of i varies each element sums up
    }

    //Average
    average=(float)sum/count;  //Finding the average

    printf("\n Average of the 10 grades entered is: %0.2f \n", average);

    return(0);
}
