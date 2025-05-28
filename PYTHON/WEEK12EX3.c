#include <stdio.h>

int main() {
    int arr[100], temp[100], n, i, j = 0;

    printf("Enter the size of the elements\n");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Removing Duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates (works correctly only if the array is sorted)
    for (i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }

    printf("Array After Removing Duplicates: ");
    for (i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
