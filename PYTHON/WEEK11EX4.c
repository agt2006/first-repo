#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    float *arr, largest;

    scanf("%d", &n);
    arr = (float *)malloc(n * sizeof(float));

    for ( i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    largest = arr[0];
    for ( i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest number = %.2f\n", largest);
    free(arr);
    return 0;
}

