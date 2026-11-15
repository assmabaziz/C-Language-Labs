#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 70
#define B 7
#define C 5

int sum_positive_elements = 0;
int sum_negative_elements = 0;
float element_Z = 0;

void generate_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() /100 - 50;
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n\n\n");
}

void generate_matrix(int matrix[B][C], int rows, int columns)
{
    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() /100 - 50;
        }
    }
}

void print_matrix(int matrix[B][C], int rows, int columns)
{
    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n\n\n");
    }
}

//Could you please comment this procedure, is it correct to pass 5 arguments to procedure?
//is it correct that the same procedure does two different tasks?
void calculate_sum_items (int *arr, int size, int matrix[B][C], int rows, int columns)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            sum_positive_elements += arr[i];
        }
    }

    for (int j = 0; j < rows ; j++)
    {
        for (int k =0 ; k < columns; k++)
        {
            if (matrix[j][k] < 0)
            {
                sum_negative_elements += matrix[j][k];
            }
        }
    }
}

void calculate_Z()
{
    element_Z = (float)(sum_positive_elements + sum_negative_elements) / (float) (sum_positive_elements - sum_negative_elements);
    printf("The element Z equals to: %f", element_Z );
}


int main()
{
    srand(time(NULL));
    int array[A];
    int matrix[B][C];
    int sum_positive ;
    int sum_negative ;


    generate_array(array, A);
    print_array(array, A);
    generate_matrix(matrix , B , C);
    print_matrix(matrix, B , C);
    calculate_sum_items(array , A , matrix , B , C);
    //printf("Sum of positive elements: %d\n", sum_positive_elements);
    //printf("Sum of positive elements: %d\n", sum_negative_elements);
    calculate_Z();

    return 0;
}
