#include <stdio.h>

struct Employee {
    int id;
    char name[20];
};

int main() {
    struct Employee e;
    FILE *fp;

    // Append to binary file
    fp = fopen("file7.txt", "ab");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Enter ID and Name: ");
    scanf("%d %s", &e.id, e.name);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    // Read and display file contents
    fp = fopen("file7.txt", "rb");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("\nEmployee Records:\n");
    while (fread(&e, sizeof(e), 1, fp)) {
        printf("%d %s\n", e.id, e.name);
    }

    fclose(fp);
    return 0;
}
