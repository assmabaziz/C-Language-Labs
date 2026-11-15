#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1000

float calc_rational_func (float x)
{
    return 1 /(x*x + 1);
}

float cos_5x (float x)
{
    return cos(5*x);
}

float trapezoid(float(*f) (float), float a, float b)
{

    float height = (b - a) / N;
    float sum = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < N ; i++ )
    {
        float x = a + i * height;
        sum += f(x);
    }
    return height * sum;
}


int main()
{
    printf("The integral of 1/x^2 +1 from 1 to 2 equals to: %f\n",  trapezoid(calc_rational_func, 1, 2));
    printf("The integral of cos 5x from -2 to 3 equals to: %f\n",  trapezoid(cos_5x, -2, 3));

    return 0;
}
