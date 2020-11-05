/*Purpose: Challenge Program for calculating net, gross income and tax from working hours
           (Program if else)
  Date: 31-08-19 2:45 PM */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float hours=0, gross=0, tax=0;

    printf(" Enter the number of working hours in a week: ");
    scanf("%f", &hours);

    //Total Income
    if (hours<=40)
        gross = hours*12;
    else if (hours>40)
        gross = 40*12+((hours-40)*18);

    printf("\n The gross amount of payment is Rs %.2f \n",gross );

    //Tax Calculation
    if (gross<=300)
        tax = (gross*0.15);
    else if (gross>300 && gross<=450)
        tax = (300*0.15)+((gross-300)*0.2);
    else if (gross>450)
        tax = (300*0.15)+(150*0.2)+((gross-450)*0.25);

    printf(" The total tax accounted is %.2f \n", tax);

    // Net amount
    printf(" The net payment is Rs %.2f \n", gross-tax);

    return(0);
}
