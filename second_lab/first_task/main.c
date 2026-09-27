#include <stdio.h>
#include <math.h>


int main()
{
    int x , pow_x ;
    double tan_x, sin_value, exp_value, fabs_value, sqrt_value, ln_value, result ;

    printf("Please enter the value of x:");
    scanf("%d", &x);
    while(x % 90 == 0 && x != 0)
    {
       printf("ERROR, the cos of this angle  = 0, please enter a valid angle: ");
       scanf("%d", &x);
    }

    tan_x = tan(x);
    printf("tan_x: %f \n",tan_x);

    sin_value = sin(x/12);
    printf("sin_value: %f \n",sin_value);

    pow_x = pow(x , 2);
    printf("pow_x: %d \n",pow_x);

    exp_value = exp(pow_x - 5);
    printf("exp_value: %f \n",exp_value);

    fabs_value = fabs(sin_value + exp_value);
    printf("fabs_value: %f \n",fabs_value);

    sqrt_value = sqrt(fabs_value);
    printf("sqrt_value: %f \n",sqrt_value);

    ln_value = log(sqrt_value);
    printf("sqrt_value: %f \n",sqrt_value);

    result = tan_x - ln_value;
    printf("The final result: %f", result);
    return 0;
}
