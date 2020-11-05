/*Purpose: Learning about format specifiers
Date: 07-08-19 01:15 PM */

#include <stdio.h>
#include <stdbool.h>
/* In order to use boolean variables must include <stdbool.h>*/


int main(void)

{
    int integerVar=100;//integer variable value defined
    float floatingVar=331.79;//floating variable value defined
    double doubleVar=8.44e+11;
    char charVar='W';
    bool BoolVar=0;

    printf("Integer Variable = %i \n", integerVar);//integer variable= %i
    printf("Floating Variable = %f \n", floatingVar);
    printf("Double Variable = %e \n", doubleVar);
    printf("Double variable = %g \n", doubleVar);
    printf("Character variable = %c \n", charVar);
    printf("Boolean Variable = %i, & Character variable = %c \n", BoolVar, charVar);

    return(0);

}


