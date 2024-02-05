#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x) {
    return x*x*x - 2 * x - 5;
}

int main() {
    float x1, x2, x0, err = 0.00021;
    int iteration = 1;

    // Get input values
    printf("Enter the first initial guess: ");
    scanf("%f", &x1);
    printf("Enter the second initial guess: ");
    scanf("%f", &x2);

    // Check if the initial guesses are valid
    if (f(x1) * f(x2) > 0) {
        printf("\nInvalid Case....Terminated......");
        exit(0);
    }

    // Bisection method
    do {
        x0 = (x1 + x2) / 2;
        printf("Iteration %d: x0 = %f, f(x0) = %f\n", iteration, x0, f(x0));
        
        if (f(x1) * f(x0) > 0) {
            x1 = x0;
        } else {
            x2 = x0;
        }

        iteration++;
    } while (fabs(f(x0)) > err);

    // Print the final root
    printf("\nThe root is = %f\n", x0);

    return 0;
}
