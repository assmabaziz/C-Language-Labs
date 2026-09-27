#include <stdio.h>
#include <stdlib.h>

int main()
{
    float result, value_x, value_y ;

    printf("Please enter the value of x: ");
    scanf("%f", &value_x);
    printf("Please enter the value of y: ");
    scanf("%f", &value_y);

    result = (value_x > 0) ? (value_x + value_y) : ((value_x <= 0 && value_y < 0)? (value_x * value_y) : 5 * value_x);

    printf("the final result: %f" , result);
    return 0;
}
