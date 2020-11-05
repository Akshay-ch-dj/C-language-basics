/*Purpose: Challenge to create a program displaying area and perimeter of a rectangle from the entered values
  Date: 08-08-19 12:00 PM */

#include <stdio.h>


int main()

{
    float width=0.0,Height=0.0,Perimeter=0.0,Area=0.0;

    printf(" Enter the width of the rectangle: \n");
    scanf("%f", &width);
    printf("Enter the Height of the rectangle: \n");
    scanf("%f", &Height);

    Perimeter = 2.0 * (width + Height);
    Area = width * Height;

    printf(" The Perimeter of the rectangle is : %f \n", Perimeter);
    printf(" The Area of the rectangle is : %f \n", Area);

    return(0);


}
