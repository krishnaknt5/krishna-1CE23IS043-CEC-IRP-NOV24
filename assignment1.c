//C program for recursive function to solve power and exponant
#include <stdio.h>
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent < 0) {
        return 1 / power(base, -exponent);
    }
    else {
        return base * power(base, exponent - 1);
    }
}
int main() {
    double base;
    int exponent;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    double result = power(base, exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);
    return 0;
}
