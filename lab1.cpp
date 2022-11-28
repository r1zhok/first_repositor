#include <math.h>
#include <stdio.h>

int main()
{
    double x = 2.531;
    double y = 0.193;
    double task = y*sqrt(x*y)+y*sin(x*y)-exp(-x*y)*cos(x*y)+7.1/x*y;
    printf("%lf", task);

}