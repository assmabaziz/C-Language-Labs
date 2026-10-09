#include <stdio.h>
#include <math.h>

int main()
{
    short counter_N = 0 , cube_counter = 0 ;
    float adjusted_count;
    double min_value = 0 , sin_value = 0, scaled_sin_value = 0;
    printf("Please enter a number: ");
    scanf("%hd", &counter_N);

    for(short counter_k = 1 ; counter_k <= counter_N ; counter_k++ )
    {
        cube_counter = pow(counter_k , 3);
        adjusted_count = counter_N + (float)counter_k / counter_N;
        sin_value = sin(adjusted_count);
        scaled_sin_value = cube_counter * sin_value;

/*
        printf("Counter K: %hd \n", counter_k);
        printf("Counter N: %hd \n", counter_N);
        printf("Cube: %hd \n", cube_counter);
        printf("Adjusted count: %f \n", adjusted_count);
        printf("Sin value: %f \n", sin_value);
        printf("scaled_sin_value: %f \n", scaled_sin_value);

*/

        if( scaled_sin_value < min_value)
        {
            min_value = scaled_sin_value;
        }

    }

    printf("The min equals to: %f", min_value);

    return 0;
}
