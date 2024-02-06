#include <stdio.h>

float func(float x, float y) {
    return 1+3*x*x;
}

int main() {
    float x, y, xp, h;
    printf("Enter initial values x and y: ");
    scanf("%f %f", &x, &y);
    printf("Enter step size h: ");
    scanf("%f", &h);
    printf("Enter the value of x for which y is required (xp): ");
    scanf("%f", &xp);

    int n = (int)((xp - x) / h);

    for (int i = 1; i <= n; i++) {
        float m1 = func(x, y);
        float m2 = func(x + h, y + h * m1);
        y = y + h / 2 * (m1 + m2);
        x = x + h;
    }
    printf("Result: x = %f, y = %f\n", x, y);
    return 0;
}
