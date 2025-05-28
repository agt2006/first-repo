#include <stdio.h>

int main() {
    int marks[10], freq[10] = {0};
    int i, group,j;

    // Input marks
    printf("Enter the marks of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("marks[%d]= ", i);
        scanf("%d", &marks[i]);

        // Determine group (0–9, 10–19, ..., 90–99)
        group = marks[i] / 10;
        if (group >= 0 && group <= 9)
            freq[group]++;
    }

    // Print histogram
    printf("*****\n");
    printf("FREQUENCY HISTOGRAM\n");
    for (i = 0; i < 10; i++) {
        printf("GROUP %d | ", i);
        for (j = 0; j < freq[i]; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
