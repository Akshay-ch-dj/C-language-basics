/*Purpose: practice Program for for loop
  Date: 02-08-19 8:30 PM */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=5, sum=0, j; //sets a counting value as ref. for the "for" loop
                            //initializing sum & j variables (can be initialized inside the loop too


    for (int i=1; i<= count; ++i)// for loop i is the iterating variable
                                 // can take values from 1to 5
    {
        sum = 1;
        j = 1;
        printf("\n 1");      //prints the value '1' in a new line

    while (j<i)     // j=1, i=1 condition fails at first then j=1, i=2 it enters while loop
    {
        sum+=++j;    // sum= sum + (j+1) (at second time sum= 1+2 =3
                     // while loop loops 2 time at third time as i=3 , so +2, +3
        printf(" +%d",j);  // prints 1 +2 (as j=2( after ++j))
    }
        printf(" =%d", sum); // prints 1 +2 = 3 at the second time
    }
  return (0);
}
