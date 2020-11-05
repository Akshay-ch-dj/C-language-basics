/*Purpose: Challenge program to get familiarize with the use of functions
           (Program uses functions, call, declare  ETC)
           I was just to test all the things(ruff-works), 100% sure an error will pop-up,
           to my surprise there is ZERO error(not even a syntax; error)
           all compile well with expected results as Jason's challenge,

           I don't even know how this works so well, that I've done all in a hurry
           as it is late and, 1/2 an hour passed after the bed time
           I'd rather like it to call it as an Coding MIRACLE...Yeh! MIRACLE DAY
  Date: 04-08-19 11:35 PM */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd (int x, int y)
{
   while(x != y)
   {
       if (x>y)
        x=x-y;
       else
        y=y-x;
   }
   return x;
}

float absValue(float number)
{
    if(number < 0)
        number=(-1)*number;
        return(number);
}

double square (double num)
{
    if(num<0)
    {
        printf("\n\nNumber is negative:\n");
        return -1;
    }
    num=absValue(num);
    double ans;
    ans= pow(num,0.5);
    return ans;
}


int main()
{
    printf(" %d", gcd(3,9));
    printf("\n\n\n %4.2f", absValue(-88));
    printf("\n\n %4.2g", square(-81));

    return 0;
}
