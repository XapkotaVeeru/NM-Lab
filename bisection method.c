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
    scanf("%f%f", &x0, &x1);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);

    f0 = functionRun(x0);
    f1 = functionRun(x1);

    if (f0 * f1 > 0.0) {
        printf("Incorrect Initial Guesses.\n");
        goto up;
    }

    do {
        x2 = (x0 + x1) / 2;
        f2 = functionRun(x2);

        if (f0 * f2 < 0) {
            x1 = x2;
            f1 = f2;
        } else {
            x0 = x2;
            f0 = f2;
        }
        step = step + 1;
    } while (fabs(f2) > e);

    printf("\nRoot is: %f\n", x2);

    return 0;
}
