#include <stdio.h>

int main() {
    char op;
    float num1, num2;
    
    while(1) {  // Start of the loop
        printf("Enter an operator (+, -, *, / ) if want to exit press x: ");
        scanf(" %c", &op);
        
        if (op == 'x') {  // Check if user wants to exit
            break;
        }

        printf("Enter two operands: ");
        scanf("%f %f", &num1, &num2);

        switch(op) {  // Switch to handle different operations
            case '+': {
                printf("%.2f\n", num1 + num2);
                break;
            }
            case '-': {
                printf("%.2f\n", num1 - num2);
                break;
            }
            case '*': {
                printf("%.2f\n", num1 * num2);
                break;
            }
            case '/': {
                if(num2 != 0) {  // Check if division by zero
                    printf("%.2f\n", num1 / num2);
                } else {  // Handle division by zero
                    printf("Error! Division by zero.\n");
                }
                break;
            }
            default: {
                printf("Error! Please write a valid operator.\n");
                break;
            }
        }
    }  // End of the loop
    
    return 0;
}

