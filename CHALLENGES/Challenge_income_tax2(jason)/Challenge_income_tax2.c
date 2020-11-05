/*Purpose: Challenge Program for calculating net, gross income and tax from working hours
           (Program uses if , if else, define, jasons program more readability)
  Date: 31-08-19 4:15 PM */



#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main()
{
    //Declare variable
    int hours=0;
    double Grosspay = 0.0;
    double Taxes = 0.0;
    double netpay = 0.0;

    //storing data entered
    printf(" Please enter the number of hours worked this week:");
    scanf("%d", &hours);

    //Calculate Grosspay
    if (hours<=40)
        Grosspay = hours*PAYRATE;
    else
    {
        Grosspay = 40*PAYRATE;
        double overtimepay = (hours-40)*(PAYRATE*1.5);
        Grosspay += overtimepay;
    }

    //Calculate taxes
    if (Grosspay<=300)
        Taxes = Grosspay*TAXRATE_300;

    else if (Grosspay>300 && Grosspay<=450)
    {
        Taxes = 300*TAXRATE_300;
        Taxes += (Grosspay-300)*TAXRATE_150;
    }
    else if (Grosspay > 450)
    {
        Taxes = 300*TAXRATE_300;
        Taxes += 150*TAXRATE_150;
        Taxes += (Grosspay-450)*TAXRATE_REST;
    }

    //Calculate the net pay
    netpay = Grosspay-Taxes;

    //Displaying Output
    printf("\n The gross amount of payment in this week is Rs %.2f \n",Grosspay );
    printf("\n The total tax paid in this week is Rs %.2f \n",Taxes );
    printf("\n The Net amount of payment in this week is Rs %.2f \n",netpay );

    return(0);

}
