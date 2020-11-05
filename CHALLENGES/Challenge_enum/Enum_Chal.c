/*Purpose: Challenge to create a program for understanding enum
  Date: 08-08-19 01:45 PM */


  #include <stdio.h>

  int main()

  {
      // Declaring enum type company
      enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT=10};

      // Declaring variables that can only use values from enum type
      enum company company_xerox, company_google, company_ebay, company_microsoft;

      // Assigning values to variable
      company_xerox = XEROX;
      company_google = GOOGLE;
      company_ebay = EBAY;
      company_microsoft = MICROSOFT;

      //Displaying values
      printf(" The value of Xerox is: %d \n The value of Google is: %d \n The value of Ebay is: %d \n ", company_xerox, company_google, company_ebay);
      printf("The value of Microsoft is: %d \n", company_microsoft);

      return(0);

  }
