#include <stdio.h>

#include "lab6.h"

/* Example test case 3.5 */


int main()
  {
  INTFLOAT x;
  unsigned int i;

  extract_float( 4.0, &x);


/* Display the result */

  printf("Fraction is: 0x%08X, Exponent is: 0x%08X\n", x.fraction, x.exponent);


  printf("Now do a performance test, repeating 1x10^9 times.\n");

/* repeat count = 1000000000 = 1 x 10^9 = 1 billion times */

  for (i=0; i<1000000000; i++)
     {
     extract_float( 3.3, &x);
     }
  printf("Ending performance test.\n");


  }

