#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Вариант 1
    int matrix [7][8];
    short i ,j;

    for (i=0; i<7; i++)
        {
            for (j = 0 ; j < 8; j++)
            {
                if((i + j) % 2 == 0 )
                    {
                        matrix[i][j] = 0;
                    }
                else
                    {
                        matrix[i][j] = 1;
                    }
            }
        }
     for (i=0; i<7; i++)
    {
        for (j = 0 ; j < 8; j++)
            {
                printf("%3d", matrix[i][j]);

            }
        printf("\n");
    }


    return 0;
}
