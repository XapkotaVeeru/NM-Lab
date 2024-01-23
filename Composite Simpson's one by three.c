#include <stdio.h>

float functionRun(float x) {
    return (1 + x * x * x);
}

int main() {
    float a, b, h, I, sum = 0, value;
    int n;

    printf("Enter the lower and upper limits: ");
    scanf("%f %f", &a, &b);

    printf("Enter the number of strips: ");
    scanf("%d", &n);

    h = (b - a) / n;
    value = a;

    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n) {
            sum += functionRun(value);
        }
        else if(i%2==0) {
            sum += 2 * functionRun(value);
        }
        else{
            sum += 4* functionRun(value);
        }
        value += h;
    }

    I = (h / 3) * sum;

    printf("The result of integration is %f\n", I);

    return 0;
}

