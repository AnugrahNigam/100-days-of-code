//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char word[]) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char words[10][100];
    int numWords = 0;
    int start = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            int len = i - start;
            for (int j = 0; j < len; j++) {
                words[numWords][j] = sentence[start + j];
            }
            words[numWords][len] = '\0';
            numWords++;
            start = i + 1;
        }
    }

    
    for (int i = 0; i < numWords; i++) {
        reverseWord(words[i]);
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}