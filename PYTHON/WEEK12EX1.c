#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start and end value\n");
    scanf("%d %d", &start, &end);

    printf("Prime Numbers from %d to %d are:\n", start, end);
    
    i = start;
    while (i <= end) {
        if (i > 1) {
            j = 2;
            isPrime = 1;
            while (j <= i / 2) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
                j++;
            }
            if (isPrime)
                printf("%d, ", i);
        }
        i++;
    }

    return 0;
}
