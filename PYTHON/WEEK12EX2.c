#include <stdio.h>
#include <string.h>

int main() {
    char str[100], oldChar, newChar;
    int i = 0;

    printf("Enter any string: ");
    gets(str);  // Use fgets in modern compilers for safety

    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter character to replace '%c' with: ", oldChar);
    scanf(" %c", &newChar);

    printf("String before replacing:\n%s\n", str);

    // Replace characters
    while (str[i] != '\0') {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
        i++;
    }

    printf("String after replacing '%c' with '%c' :\n%s\n", oldChar, newChar, str);

    return 0;
}
