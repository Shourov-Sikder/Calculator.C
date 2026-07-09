#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("Enter an expression (e.g., 10 + 5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
