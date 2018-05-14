#include <stdio.h>

#include "lab6.h"


void extract_float(float g, INTFLOAT_PTR xp) {

  /* zero case */
  if(g == 0) {
    xp->fraction = 0;
    xp->exponent = 0;
    return;
  }
  
  /* extracting exponent */
  xp->exponent = (int)((g & 0x80000000) >> 23) - 127;
  xp->exponent += 1; /* hidden 1 */

  /* extracting fraction */
  xp->fraction = 0x00800000;
  xp->fraction = xp->fraction | g;
  xp->fraction = xp->fraction & 0x007FFFFF;
  xp->fraction = xp->fraction << 7;

  /* testing signed bit */
  if(g < 0) {
    xp->fraction = -xp->fraction;
  }

}

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

