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

    scanf("%d %s", &i, str);
    /* Specify the type of data need to read, %d %s shows the data entered must be in the form integer<white space>character(or string whatever fk)*/
    /* Integer need ambersand(&), string not need the &*/

    printf("\n You entered: %d:::::%s\n", i, str);
    /*\n means new line the thing you entered displayed in a new line in the format integer::::word, in the prinf also need to display the formats of things to display, here with no ambersands*/

    return 0;

}

