#include <stdio.h>
#include <string.h>

int main() {
    char text[100], word[50];
    char *pos;

    // Input the main text
    printf("Enter Any String to Remove a Word from String: ");
    gets(text); // Use fgets in modern compilers

    // Input the word/phrase to remove
    printf("Enter Any Word You Want to be Removed: ");
    gets(word);

    // Find the substring
    pos = strstr(text, word);

    if (pos != NULL) {
        // Shift the remaining part of the string to the left
        memmove(pos, pos + strlen(word), strlen(pos + strlen(word)) + 1);
        printf("Updated String: %s\n", text);
    } else {
        printf("Word not found in the text.\n");
    }

    return 0;
}
