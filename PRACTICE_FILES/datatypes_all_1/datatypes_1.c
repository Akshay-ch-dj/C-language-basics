/*Purpouse: Example on all data types
Date: 03-08-19 11:50 PM */
#include <stdio.h>

int main(void)
{
    /* Changing to meaningfull names for quality coding*/
    int akshay=2, shanku=3, annan=1;
    float fakshay = 100.00;
    double dakshay = 8.44e+11;
    float booakshay = 0;

    char str[190];
    printf("Enter a number:\n");

    scanf("%d", &annan);

    printf("\nEnter the time now in HH.MM format:\n\n %d attempts left\n", fakshay);

    scanf("%d", &fakshay);

    printf("Here is a question do you know the exact weight of earth?:\n\n if yes enter '1' if no enter '0'\n" );
    scanf("%d", booakshay);

    printf("The matches are %d::::%d<><><><>%d{}{}{}{}{}\n\n and the answer is %d\n", annan, booakshay, dakshay);
    /*%d is used to print(show) integers %s used to show strings=thats representing the data
    types we need to display followed by the name of the variables want to display*/
    return 0;
}


