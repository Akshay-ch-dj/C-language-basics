/*Purpose: Challenge Program for creating a guessing game, in which
           user try to identify a random number (between 0-20) preselected by the
           program by trial and error up to a max. allowed chance of 5.
           (Program uses if , if else, for/while loop, break/continue, challenge program_Final)
  Date: 02-08-19 8:30 PM */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // library to use time functions

#define MAX 20
#define MIN 1

int main ()
  {
   int guess=0;
   time_t t; // initializing the time variable
   srand((unsigned)time(&t));//initialize random
   guess=rand()%21; // generates random number between 1 to 21, using current time as seed


   printf("\n This is a guessing game \n I have chosen a number in range 1 to 20 (both including) \n Try to guess the number \n");

   signed int value=0;

   for(int i=5; i>=1; i--)
   {
       printf("\n You have %d tr%s left", i,i==1? "y" : "ies");// Turnery operator returns value based on condition
       printf("\n Enter a guess: ");
       scanf("%d", &value);

       if (value>MAX || value<MIN) // Need to use the logical or not the logical and
       {
           printf("\n You must enter a value between 0 and 21\n");
           continue;
       }
       if (value == guess)
        {printf(" Congratulations; you guessed it correct\n");
         break;
        }
       else if (value>guess)
        printf("\n Sorry, %d is wrong: My number is less than that\n", value);
       else if (value<guess)
        printf("\n Sorry, %d is wrong: My number is greater than that\n", value);


  if (i==1)// need to show at the last try
       {printf(" \n\n You have lost all your tries: The no. is %d \n Better luck next time\n", guess);
        break;
       }
   }

   return (0);
  }
