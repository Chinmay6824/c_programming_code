#include <stdio.h>

int main() {
    char op;
    int a, b, result;

    while (1) {
        printf("Enter operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &op);

        if (op == 'q') // Check if the user wants to quit
            break;

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b != 0)
                    result = a / b;
                else {
                    printf("Error: Division by zero\n");
                    continue; // Skip rest of the loop and start from the beginning
                }
                break;
            default:
                printf("Error: Invalid operator\n");
                continue; // Skip rest of the loop and start from the beginning
        }
        printf("Result: %d\n", result);
    }

    printf("Exiting program.\n");

    return 0;
}
