#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>

// Add your test cases for Exercise 1b,c) here
int main()
{
    double x = 32;
    double n = 70;
    printf("The sine of math is %lf\n", sin(x));
    printf("The sine of taylor_sine is %lf\n",taylor_sine(x,n));
    
    return 0;
}