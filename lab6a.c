#include <stdio.h>

#include "lab6.h"

/* Fully-implemented extract_float */


void extract_float(float f, INTFLOAT_PTR xp)
  {
  unsigned  int uintf;

  uintf = (unsigned int) *(unsigned int *) &f;  /* Get unsigned int version of float */

  if (uintf == 0)
     {
     xp->fraction = 0;
     xp->exponent = 0;
     return;
     }


/* ... Your code goes here ... and the rest is yours. */

  xp->fraction = 0x40000000; xp->exponent = 1;   /* SET A DEFAULT=1.0 -- DELETE THIS LINE AFTER YOU IMPLEMENT YOUR CODE */

/* --- */




  return;
  }

