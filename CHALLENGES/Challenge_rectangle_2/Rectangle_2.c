/*Purpose: Challenge to create a program displaying area and perimeter of a rectangle from the entered values
  Date: 08-08-19 01:00 PM */


#include <stdio.h>


int main(int argc, char *argv[]) //argument count and argument variable

{
    double width = atoi(argv[1]),Height = atoi(argv[2]),Perimeter = 0.0,Area = 0.0;

    Perimeter = 2.0 * (width + Height);
    Area = width * Height;

    printf(" *Width is: %.2f,\n *Height is : %.2f, \n The Perimeter of the rectangle is : %f \n", width, Height, Perimeter);
    printf(" The Area of the rectangle is : %f \n", Area);

    return(0);

}
