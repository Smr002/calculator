#include <stdio.h>
#include <math.h>

int sum(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float) a / b;
}

float square_root(int a) {
    return sqrt(a);
}

float power(int a, int m) {
    return pow(a, m);
}

int main() {
    int a, b, operation;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Select an operation to perform:\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root of a number\n");
    printf("6. Power of a number\n");
    printf("Enter operation number: ");
    scanf("%d", &operation);
    switch(operation) {
        case 1:
            printf("%d + %d = %d\n", a, b, sum(a, b));
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, subtraction(a, b));
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, multiplication(a, b));
            break;
        case 4:
            if (b == 0) {
                printf("Division by zero error!\n");
            } else {
                printf("%d / %d = %.2f\n", a, b, division(a, b));
            }
            break;
        case 5:
            if (a < 0) {
                printf("Invalid input for square root!\n");
            } else {
                printf("sqrt(%d) = %.2f\n", a, square_root(a));
            }
            break;
        case 6:
            printf("%d^%d = %.2f\n", a, b, power(a, b));
            break;
        default:
            printf("Invalid operation number!\n");
            break;
    }
    return 0;
}
