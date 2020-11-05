/*Purpose: Challenge program to create program that reverses string and
           sorts multiple strings


  Date: 17-09-19 09:30 PM */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString (char string1[]);
void sortString ();

int main()
{
    char input[140];

    printf("\n Enter the string need to be inverted: \n");
    scanf("%s", input);

    reverseString(input);

    sortString();

    return 0;
}


/* This function reverses a string entered */

void reverseString (char string1[])
{
    char result[150];
    int i=0, j=0, size = strlen(string1);


    for(i=size; i >= 0; i--)
    {
        result[j] = string1[i-1];
        j++;
    }
    result[j] = '\0';

    printf("\n\n The inverted string is \n\t \" %s \"", result);
}

/* This function sorts the entered words(strings) in ascending order of first character */

void sortString()
{
    char name [25][50], temp [25];  // 2D array, 25 words with max size of 50
    int n=0, i=0, j=0;

    /* Displaying what the function does for user understanding */

    printf(" \n\nThe following sorts the strings in an array using bubble sort \n");
    printf(" ------------------------------------------------------\n");

    /* main prgrm */
    printf(" Input the number of strings: ");
    scanf("%d", &n);

    /* Reading Strings */
    printf(" \n Input %d strings: \n", n);
    for ( i=0; i < n; i++)
        scanf("%s", name[i]); //words get saved to each row ie  (0 - (n-1))

    /* Bubble sort Algorithm */
    for (i=1; i <= n; i++)
        for (j = 0; j <= n-i; j++)
        if ( strcmp(name[j], name[j+1]) > 0)    /* strcmp compares strings(here first letters of each word gets compared
                                                   eg: strcmp( "A", "B" )  as A < B , it returns   "-1"
                                                            ( already in order no need swapping )
                                                       strcmp( "B", "A" )  as B > A , it returns   " 1 "
                                                            ( need swapping, ie, if strcmp(....) > 0 )  */
         {
            strncpy(temp, name[j], sizeof(temp)-1); // Use strncpy to avoid buffer overflow
            strcpy(name[j], name[j+1]);
            strcpy(name[j+1], temp);
         }
    printf(" The sorting result: \n");
       for (i=0; i <= n; i++)
        printf("%s\n", name[i]);
}
