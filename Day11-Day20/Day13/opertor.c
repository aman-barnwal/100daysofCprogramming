#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

