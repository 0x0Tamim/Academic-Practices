#include <stdio.h>
#include <string.h>

int countWords(char *);

int main() {
    char inputString[1000];

    printf("Enter a string with spaces: ");
    gets(inputString);

    int wordCount = countWords(inputString);

    printf("Number of words: %d\n", wordCount);

    return 0;
}

int countWords(char *str) {
    int count = 0;
    int isWord = 0; // Flag to check if the current character is part of a word

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            // If the current character is a space, tab, or newline, it indicates the end of a word
            isWord = 0;
        } else if (isWord == 0) {
            // If the current character is not a space, tab, or newline, and isWord is 0, it indicates the start of a new word
            isWord = 1;
            count++;
        }
        str++;
    }

    return count;
}
