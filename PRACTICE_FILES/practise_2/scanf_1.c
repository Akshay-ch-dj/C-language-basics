/*Using scanf function
Purpose: understanding scanf function
Date: - 03/08/2019
*/
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a value:");

    scanf("%d", &i);
    /* Specify the type of data need to read, %d shows the data entered must be in the form integer*/
    /* Integer need ambersand(&)*/

    printf("\n You entered: %d\n", i);
    return 0;

}
