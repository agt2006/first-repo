#include <stdio.h>

int main() {
    FILE *src = fopen("file3.txt", "r"), *dest = fopen("file2.txt", "w");
    if (!src || !dest) {
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully\n");
    fclose(src);
    fclose(dest);
    return 0;
}

