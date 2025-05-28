#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int regno, marks[5], total;
    float percentage;
};

int main() {
	int i,j;
    struct student s[5];
    for ( i = 0; i < 5; i++) {
        printf("Enter details for student %d:\nName: ", i+1); 
        getchar(); fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;
        printf("Registration Number: "); scanf("%d", &s[i].regno);
        printf("Enter marks for 5 subjects:\n");
        s[i].total = 0;
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j+1); scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / 5.0;
    }

    for (i = 0; i < 4; i++) {
        for ( j = i+1; j < 5; j++) {
            if (s[i].total > s[j].total) {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Sorted students by total marks:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Regno: %d, Total: %d, %.2f%%\n", s[i].name, s[i].regno, s[i].total, s[i].percentage);
    }
    return 0;
}

