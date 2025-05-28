#include <stdio.h>

int main() {
    int n,i;
    float sum = 0.0;

    printf("Input any number: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {  // Start of the for loop
        sum += 1.0 / i;  // Add the current term to the sum
        if (i == n) {  // Check if it's the last term
            printf("1/%d\n", i);
        } else {  // Print terms except the last one
            printf("1/%d + ", i);
        }
    }  // End of the for loop

    printf("Sum = %.2f\n", sum);  // Print the final sum
    return 0;
}

