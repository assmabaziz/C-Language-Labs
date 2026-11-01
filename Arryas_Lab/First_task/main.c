#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 25

int main()
{

    srand(24);
    short number_found;
    short count_items = 0;
    short i;
    short j;
    int array[N];
    int new_array[N];
    short n = N;

    for (i = 0; i <n ; i++)
        {
            array[i] = rand()%100 - 50;
        }

    printf("\nThe main array: \n");

    for(i = 0; i<n; i++)
        {
            printf("%5d ", array[i]);

        }

    for (i = 0; i < n; i++ )
        {
            number_found = 0;
            for (j = 0 ; j <n ; j++)
                {
                    if(array[i] == array[j] && i!=j)
                        {
                           number_found = 1;
                           break;
                        }
                }

             if (number_found == 0)
                {
                    new_array[count_items] = array[i];
                    count_items ++;
                }
        }


    printf("\nThe new array: \n");

     for (i = 0; i < count_items; i++)
    {
        printf("%5d ", new_array[i]);
    }

    return 0;

}
