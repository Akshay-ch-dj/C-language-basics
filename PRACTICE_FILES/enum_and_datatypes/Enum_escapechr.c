/*Purpose: enum data type and escape characters practice program
Date: 04-08-19 11:00 PM */
#include <stdio.h>

int main(void)
{
   char str[100];
   enum gender {male, female, Transgender} ;
   /* Here declared  an enum named gender which can have only three
   values male, female and transgender numbered 0,1,2*/

   enum gender mygender;
   mygender= female;
   printf("\n Type Your Gender: \n");
   scanf("%s", str);

   printf("\n Your Gender is %s", str);
   return 0;
}



