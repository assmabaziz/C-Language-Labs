#include <stdio.h>
#include <stdlib.h>

int main()
{

    short value_N ;
    short value_M ;

    printf("Enter the value of N: ", value_N);
    scanf("%hd", &value_N);

    printf("Enter the value of M: ", value_M);
    scanf("%hd", &value_M);

    short counter = value_N ;

    while (counter >= 1)
    {
        if ( value_N%counter == 0 && value_M%counter ==0)
        {
            value_N = value_N / counter ;
            value_M = value_M / counter ;
        }

        counter --;
    }

    printf("%d / %d", value_N , value_M);


    return 0;
}
