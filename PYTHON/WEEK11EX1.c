#include <stdio.h>

void sort(int *arr, int n) {
	int i,j;
    for (  i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n,i;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the Array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("After Sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

