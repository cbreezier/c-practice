#include <stdio.h>

int main(int argc, char *argv[]) {
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("%.6lf\n", a * b);

    return 0;
}
