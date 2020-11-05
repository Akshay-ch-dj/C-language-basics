/*Purpose: Learning Command line arguments
Date: 08-08-19 11:10 AM */

#include <stdio.h>

int main(int argc, char *argv[])
//argc - number of data- after comma data that you are passing into the program

{
    int number_of_Aguments= argc;
    char *argument1= argv[0];
    /* setting argument1 variable = the program name*/

    char *argument2= argv[1];
    /* argument2 as the command line argument, data that user
    passing, so total number of arguments will be 2 that stored
    as integer value in argc variable*/

    printf(" Number of argument: %d \n", number_of_Aguments);
    printf("Argument1 is the program name: %s \n", argument1);
    printf("Argument2 is the command line argument: %s \n", argument2);
    /* Highlight the project - then select project menu to set program arguments
    to set your command line arguments*/

    return (0);
}
