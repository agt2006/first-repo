#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for ( i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n - 1; i++) {  // Outer loop
        for ( j = i + 1; j < n; j++) {  // Inner loop
            if (*(arr + i) > *(arr + j)) {  // If elements are out of order
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {  // Print sorted array
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}

