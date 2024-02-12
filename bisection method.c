#include <stdio.h>
#include <math.h>

float functionRun(float x) {
    return (x * x) - (4 * x) - 10;
}

int main() {
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1;

    up:
    printf("\nEnter two initial guesses:\n");
    scanf("%f%f", &x1, &x2);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);

    f1 = functionRun(x1);
    f2 = functionRun(x2);

    if (f1 * f2 > 0.0) {
        printf("Incorrect Initial Guesses.\n");
        goto up;
    }

    do {
        x0 = (x1 + x2) / 2;
        f0 = functionRun(x0);

        if (f1 * f0 < 0) {
            x2 = x0;
            f2 = f0;
        } else {
            x1 = x0;
            f1 = f0;
        }
        step = step + 1;
    } while (fabs(f0) > e);

    printf("\nRoot is: %f\n", x0);

    return 0;
}
