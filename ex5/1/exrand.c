#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int  main(void) //main function begins
{
 
//Uniform random numbers
binomial("bin.dat", 1000000);
gaussian("gau.dat",1000000);
//Mean of uniform
//printf("%lf",mean("uni.dat"));
return 0;
}
