/*Purpose: Program displaying no of days in each month.
           (Program uses for loop, ARRAY INITIALIZATION)
  Date: 03-08-19 7:15 PM */


#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12


int main()
{
  int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
  int index;

  for(index=0; index<MONTHS; index++)
  printf("Month %d has %2d days. \n", index+1, days[index]);

  return(0);
}
