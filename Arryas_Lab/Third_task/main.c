#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int** dynamic_matrix;
    int i , j, matrix_size;
    float Z;
    srand(time(NULL));

    printf("Enter the size of matrix: \n");
    scanf("%d", &matrix_size);

    dynamic_matrix = (int**)malloc(matrix_size * sizeof(int*));

    for (i = 0; i < matrix_size ; i++)
        {
            dynamic_matrix[i] = (int*)malloc(matrix_size * sizeof(int));
            for (j = 0; j < matrix_size; j++)
                {
                    dynamic_matrix[i][j] = rand() / 100;
                }
        }

    int max_element = dynamic_matrix[0][0];
    int min_element = dynamic_matrix[0][0];

    for (i = 0; i < matrix_size ; i++)
        {

            for (j = 0; j < matrix_size; j++)
                {

                     if (dynamic_matrix[i][j] < min_element)
                       {
                           min_element =  dynamic_matrix[i][j] ;
                       }

                     if (dynamic_matrix[i][j] > max_element)
                        {
                            max_element = dynamic_matrix[i][j] ;

                        }

                    printf("%5d",  dynamic_matrix[i][j]);

                }

            printf("\n \n");
        }

        printf("Max: %d\n", max_element);
        printf("Min: %d\n", min_element);
        Z = (float)min_element / ((float)max_element + (float)min_element);
        printf("Z: %f\n", Z);
       free(dynamic_matrix);

    return 0;
}
