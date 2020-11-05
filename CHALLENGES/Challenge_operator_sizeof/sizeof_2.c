/*Purpose: Challenge program(neat) in order to familiar
  with sizeof operator
  Date: 22-08-19 1:45 PM */


  #include<stdio.h>

  int main()
  {
      printf("Variables of the type 'int' occupy %u", sizeof(int));
      printf("Variables of the type 'char' occupy %u", sizeof(char));
      printf("Variables of the type 'long' occupy %u", sizeof(long));
      printf("Variables of the type 'long long' occupy %u", sizeof(long long));
      printf("Variables of the type 'double' occupy %u", sizeof(double));
      printf("Variables of the type 'long double' occupy %u", sizeof(long double));
      printf("Variables of the type 'float' occupy %u", sizeof(float));
  }
