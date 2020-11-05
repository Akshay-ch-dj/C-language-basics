/*Purpose: Learning about Bitwise operators
  Date: 14-08-19 08:45 PM */


  #include<stdio.h>


  int main()
  {
      unsigned int a=60; // 0011 1100
      unsigned int b=13; // 0000 1101

      int result=0;

      printf(" a is 60 and b is 13 \n\n", result);

      result = a&b;
      /* All bits with a=1 and b=1 are gonna turn ON,
         others got OFF(means Zero)
         i.e. 0000 1100  >> 12 */
      printf(" Result of Bit. AND is %d \n", result);

      result = a|b;
      /* Performs the bitwise OR operation,
         0011 1101 >>  61 */
      printf(" Result of Bit. OR is %d \n", result);

      result = a^b;
      /* Bitwise XOR operation,
         0011 0001 >> 49*/

      printf(" Result of Bit. XOR is %d\n", result);

      result = ~a;
      /* Bitwise Compliment operation,
         1100 0011 >> 194 */
      printf(" Result of Bit. Compliment is %d\n", result);

      result = a<<2;
      /* 0011 1100 Shift Left by 2>> 1111 0000 */
      printf(" Result of BIt. SHIF LEFT(2) is %d\n", result);

      result = a>>3;
      /* 0011 1100 Shift Right by 3>> 0000 0111 */
      printf(" Result of BIt. SHIF RIGHT(3) is %d\n", result);

      return (0);
  }
