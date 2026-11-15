#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 57
#define B 7
#define C 5

    //Option 1
    int index_max_array;
    int index_row_max_matrix;
    int index_column_max_matrix;


void generate_array(int *Arr, int size)
    {
        for(int i = 0; i < size ; i ++)
        {
            Arr[i] = rand()%100;
        }
    }

void print_array(int *Arr, int size)
    {
        for(int i = 0; i < size ; i ++)
        {
            printf("%5d", Arr[i]);
        }
        printf("\n\n\n\n");
    }
void generate_matrix(int matrix[B][C], int rows, int columns)
    {
        for(int i = 0; i < rows ; i ++)
        {
            for(int j =0; j < columns; j++)
            {
                matrix[i][j] = rand()%100;
            }
        }
    }

void print_matrix(int matrix[B][C], int rows, int columns)
    {
        for(int i = 0; i < rows ; i ++)
        {
            for(int j =0; j < columns; j++)
            {
                printf("%5d ", matrix[i][j]);
            }
            printf("\n");
        }
    }


int find_max_array(int *Arr, int size)
    {
        int max_array = Arr[0];
        for(int i = 0; i < size ; i ++)
            {
                if (Arr[i] > max_array)
                {
                    max_array = Arr[i];
                    index_max_array = i;
                }
            }
            return max_array;
    }


int find_max_matrix(int matrix[B][C], int rows, int columns)
    {
        int max_matrix = matrix[0][0];
        for(int i = 0; i < rows ; i++)
        {
            for(int j = 0; j < columns; j++)
            {
                if (matrix[i][j] > max_matrix)
                {
                    max_matrix = matrix[i][j];
                    index_row_max_matrix = i;
                    index_column_max_matrix = j;

                }
            }
        }
        return max_matrix;
    }

void replace_elements(int max_arr, int max_matrix)
    {
        int temp;
        temp = max_arr;
        max_arr = max_matrix;
        max_matrix = temp;
    }

int main()
{
    srand(time(NULL));
    int array[A];
    int matrix[B][C];
    int max_array;
    int max_matrix;

    generate_array(array, A);
    print_array(array, A);
    generate_matrix(matrix , B, C);
    print_matrix(matrix , B, C);
    max_array = find_max_array(array, A);
    max_matrix = find_max_matrix(matrix, B, C);
    printf("\n\nmax_array: %d\n", max_array);
    printf("max_matrix: %d", max_matrix);
    replace_elements (max_array, max_matrix);
    printf("\n\nmax_array: %d\n", max_array);
    printf("max_matrix: %d\n", max_matrix);

    //Could you please comment this point, is it better to create a function to do this actions, I mean replace the items between array and matrix

    array[index_max_array] = max_matrix;
    matrix[index_row_max_matrix][index_column_max_matrix] = max_array;

    print_array(array, A);
    print_matrix(matrix , B, C);
    return 0;
}
