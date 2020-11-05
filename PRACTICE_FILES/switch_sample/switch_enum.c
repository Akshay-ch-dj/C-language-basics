/*Purpose: Program to study about switch statement
           (Also enum)
  Date: 31-08-19 11:30 AM */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum weekdays {monday, tuesday, wednesday, thrusday, friday, saturday, sunday};
    enum weekdays today=thrusday;

    switch (today)
    {
    case sunday:
        printf(" Today is sunday");
        break;
    case monday:
        printf(" Today is monday");
        break;
    case tuesday:
        printf(" Today is tuesday");
        break;
    default:
        printf(" Whatever");
        break;
    }

return(0);

}
