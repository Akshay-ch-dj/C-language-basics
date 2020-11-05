/*Purpose: Program to learn sorting methods in C,

  Date: 18-09-19 09:30 AM */


#include <stdio.h>
#include <stdlib.h>

void bubbleSortAsc(int n, int values[]);
void bubbleSortDsc(int n, int values[]);

int main()
{
    int count=0;
    int number[150]={0};

    printf("\n Enter the no. of elements to be sorted: ");
    scanf("%d", &count);

    printf("\n");
    printf(" Enter the %d numbers: ", count);
    printf("\n ");

    for (int i=0; i < count; ++i)
      {
        scanf(" %d", &number[i]);
      }

    bubbleSortAsc(count, number);
    bubbleSortDsc(count, number);

    return 0;
}


/** Function to bubble sort **/

void bubbleSortAsc(int n, int values[])
{
    int i=0, j=0, temp=0;
    for (i=0; i < n-1; i++)     // If we sort 4 elements the 5th one automatically gets sorted
                                // outer loop represent the no. of values to be sorted
   {
    for (j=0; j < n-1-i; j++)      // Inner loop one inner loop iteration complete means
                                    // one element gets sorted
     {
        if ( values[j] > values[j+1])
        {
            temp = values[j];
            values[j] = values[j+1];
            values[j+1] = temp;
        }
     }
   }
 printf("\n Ascending order: \n");
   for (int i=0; i < n; ++i)
      {
        printf(" %d ", values[i]);
      }

   printf("\n");
}



/** Function to bubble sort Descending**/

void bubbleSortDsc(int n, int values[])
{
    int i=0, j=0, temp=0;
    for (i=0; i < n-1; i++)     // If we sort 4 elements the 5th one automatically gets sorted
                                // outer loop represent the no. of values to be sorted
   {
    for (j=0; j < n-1-i; j++)      // Inner loop one inner loop iteration complete means
                                    // one element gets sorted
     {
        if ( values[j] < values[j+1])
        {
            temp = values[j];
            values[j] = values[j+1];
            values[j+1] = temp;
        }
     }
   }

   printf("\n Descending order: \n");
   for (int i=0; i < n; ++i)
      {
        printf(" %d ", values[i]);
      }
}

