/*Purpose: program to study about If looping
  Date: 30-08-19 2:30 PM */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score=0, dist=85, lowm=60, big=95;

    //First store the marks from the user
    printf("Enter your marks: ");
    scanf("%i", &score);

    //simple if statements no brackets
    if (score >= dist)
        printf(" You got DISTINCTION \n");
    if ( score >= lowm && score <= dist)
        printf(" You got First Class \n");
    if ( score < lowm)
        printf(" Better luck next time \n");

    if ( score > big)
    {
        score ++;
        printf(" Your mark incremented to %d marks \n", score);

    }

    return (0);
}
