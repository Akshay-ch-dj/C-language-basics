/*Purpose: Challenge program to convert Minutes to days
  in section operators 2
  Date: 22-08-19 12:45 PM */

#include<stdio.h>

int main()
{
    //By using long long int as data type, can store large values
    long long int minutesentered=0;
    double years=0.0;
    double days=0.0;
    double minuteinyears=0.0;

    printf("Please enter the number of minutes: ");

    //Get input from user
    scanf("%lld", &minutesentered);

    minuteinyears=60.0*24.0*365.0;
    years=minutesentered/minuteinyears;
    days=(minutesentered/60.0)/24.0;

    printf(" %lld minutes is approximately %f years & %f days \n", minutesentered, years, days);

    return(0);
}
