#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>

// Add your test cases for Exercise 1b,c) here
int main()
{
    double x = 3.1415;
    double n = 7;
    printf("The sine of math is %lf\n", sin(x));
    printf("The sine of taylor_sine is %lf\n",taylor_sine(x,n));
    
    return 0;
}