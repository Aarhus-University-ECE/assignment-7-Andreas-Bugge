#include "taylor_sine.h"
#include <math.h>
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
int factorial (int n)
{
    assert(n >= 0); // checks to make sure n is higher than 0
    if(n == 0) //edge case if n is 0
    return 1;
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}
bool iseven(int n)
{
    return n%2 == 0;  
}
double taylor_sine(double x, int n)
{
    double sum = 0;
    int holder = 1;
    for(int c = 0; c < n; c++)
    {
    double fortegn = iseven(c) ? 1.0 : -1.0;
    sum += fortegn * pow(x, holder) / (double) factorial(holder);
    holder += 2;
    }

    return sum;
}
