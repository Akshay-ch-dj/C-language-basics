/*Purpose: Challenge program to display prime no's between two given no's
           using arrays to store them(jason fedin explanation was not satisfactory so
           I my self grabbed a program from youtube made some alterations this is not
           as advanced as fedin's one but i think it works, yeh it works well
           (Program uses for loop, ARRAY INITIALIZATION, STORE DATA< DISPLAY DATA ETC)
  Date: 04-08-19 11:45 AM */



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int l=0,u=0,p;

    int primes[50]={0}; //Array to store prime no's all elements initialized to zero
    int primeindex = 0; //need a variable to use in a loop to change location each time a prime no detects

    //Hard coding first two prime no's (not needed with current algorithm)
    //primes[0]=2;
    //primes[1]=3;

    //Reading input
    printf("\n Enter two numbers:\n");
    scanf("%d%d", &l,&u);

    printf("\n\n");// just some blank space

    //Main Algorithm
    for (p=l+1; p<=u-1; p++)// outer loop to evaluate each number one by one excluding the lower and higher values
    {
        for (i=2; i<p; i++) /*inner loop generate all no's from 2 to 1 below the testing no
                              for eg. if "7" is the number to be tested p=7, i takes values
                              2,3,4,5,6 neither one of them completely divides 7 (none of them are
                              factors of "7") so the condition inside  if never gets true*/
        {
            if(p%i == 0)
                break;
        }
        if (i==p)           /* when i=6 (that is the last cycle) after for loop iteration
                               raises it to "i=7" then condition(i<p) checked found it is not valid
                               anymore so it comes out of the loop then this "if" comes in to play
                               the condition "i==p" satisfied means p is a prime no, ie if p got any
                               other factors than own it gets already out from the for loop as per the above
                               criterion(if loop), it means our number (as per the eg: "7") got only one factor
                               "7" (we not considering "1" here) so it is prime */
        {
            primes[primeindex]=p;  /*primeindex is set to zero first prime no within the limit get stored
                                     as element in '0th' location*/
            ++primeindex;          // location iterated each time
        }

    }

    //Displaying prime no's

    for (i=0; i<primeindex; ++i)
       printf("%d ", primes[i]);

       printf("\n\n The total no of prime numbe%s are: %d",i==1? "r": "rs" , i);

    printf("\n");

    return (0);

}
