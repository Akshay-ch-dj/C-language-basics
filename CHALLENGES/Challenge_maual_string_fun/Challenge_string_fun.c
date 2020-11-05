/*Purpose: Challenge program to create some functions
           which manually does what the strlen, strcmp & strcat
           function does to a string

  Date: 17-09-19 07:00 PM */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength (const char string[]);// Fun1. Definition
void concat (char result[], const char string1[], const char string2[]); // Fun2.
bool equalString (const char string1[], const char string2[]); // Fun3.


/*** Main function  **/

int main()
{
    const char word1[]= "Akshay";  //const. char array
    const char word2[]= "Monkeyface";
    const char word3[]= "Monkeyface";
    char result_con[150];


    printf(" \n\nThe string length is \" %d \" \n\n", stringLength(word1));

    concat(result_con, word2, word1);

    printf(" \n\nThe strings are \" %s \" \n\n", equalString( word2, word3)== 1? "Equal": "Not equal");

    return (0);
}


/*** This function takes a const. string as input and returns its length
    as an int value  ***/

int stringLength(const char string[])  //Fun 1 initialization
{
   int count = 0; //local var.

   //Main part
   while (string[count] != '\0')
    ++count;

   return (count);
}

/*** This function recives three strings concatinate them in to one **/

void concat (char result[], const char string1[], const char string2[]) // Fun2 start
{
    int i,j;

    for (i=0; string1[i] != '\0'; i++)
        {
           result[i] = string1[i];    //result equal to string1 until it gets a null character
        }

    for (j=0; string2[j] != '\0'; j++)
      {
        result[i+j] = string2[j];   //result value set to max i count then equates to string2
      }
        result[i+j] = '\0';
        printf(" \n\n The resultant string is \n\t\t\" %s \"", result);

}

/** This function checks if two strings are equal or not  **/

bool equalString (const char string1[], const char string2[])
{
    int i, count = 0, length = 0;

    for (i=0; string1[i] != '\0'; ++i)
    {
        if (string1[i] == string2[i])
            count++;
    }

    length = stringLength(string1);

    if (count == length)
        return (true);
    else
        return (false);
}
