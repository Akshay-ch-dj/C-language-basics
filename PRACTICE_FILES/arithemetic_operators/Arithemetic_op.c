/*Purpose: Learning about Arithmetic operators
  Date: 13-08-19 11:35 AM */

#include<stdio.h>

int main()
{
    int a,b,R=0;
    printf("Enter the values a and b:\n");

    scanf("%d, %d", &a, &b);
    //Taking two values from the user sep by acomma

    // sum
    R = a+b;

    printf("The sum is %d\n", R);

    printf("The difference is %d\n", a-b);

    printf("The Product is %d\n", a*b);

    printf("The division value is %d\n", a/b);

    printf("The modulus is %d\n", a%b);

    printf("The increment and decrement are %d and %d\n",a++,b--);

    printf("The sum is %d\n", a+b);

    printf("The increment and decrement are %d and %d\n",++a,--b);

    return(0);

}
