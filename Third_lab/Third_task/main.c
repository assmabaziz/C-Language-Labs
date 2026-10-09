#include <stdio.h>
#include <math.h>

int main()
{
    double value_x;
    double epsilon = 1e-5;
    int n = 1;
    double current_term = 0;
    double sum = 0.0;

    printf("Please enter x (-1 <= x <= 1): ");
    scanf("%lf", &value_x);

    if (value_x < -1.0 || value_x > 1.0) {
        printf("Error: x must be in the range [-1, 1].\n");
    }
    else {
        current_term = -value_x / 2.0;
        while (fabs(current_term) >= epsilon) {
            sum += current_term;
            n++;
            current_term *= (-value_x / (n + 1.0));
        }
    printf("Computed sum: %f\n", sum);
    printf("Number of terms added: %d\n", n - 1);

    }

    return 0;
}
