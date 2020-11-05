/*Purpose: Learning about Logic operators
  Date: 14-08-19 12:00 PM */

#include<stdio.h>


int main()
{
    _Bool a=1;
    _Bool b=0;
    _Bool R=0;

    R = a&&b;
    printf("The result is: %i\n", R);

    R = !(a&&b);

    printf("The compliment is : %i\n", R);

    R= !(a||b)&(a&&!b);

    printf(" The answer for operation not(a or b)and(a and not b) :%i", R);

    return (0);

}
