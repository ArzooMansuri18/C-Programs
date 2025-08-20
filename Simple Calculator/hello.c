#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // space before %c to ignore newline from previous input

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Result: %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}