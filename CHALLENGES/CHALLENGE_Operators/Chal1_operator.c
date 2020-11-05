/*Purpose: Challenge program 1 in section operators
  Date: 19-08-19 7:15 PM */

 #include<stdio.h>

 int main()
 {
     float minutes=0;
     float years=0, Days=0;

     printf("Enter the number of minutes: \n");
     scanf("%f", &minutes);

     years = minutes/(365*24*60);

     printf("The number of years are: %f\n", years);

     Days = minutes/(24*60);

     printf("The number of Days are: %f\n", Days);

     return (0);

 }

