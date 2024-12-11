#include <stdio.h>
#include <string.h>

void sort_desc(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (word[i] < word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}

int main() {
    char sentence[256];
    char target[101];
    char word[101];
    char result[256] = "";
    char sorted_word[101];

    scanf(" %[^\n]", sentence);

    scanf("%s", target);

    int start = 0, end = 0, len = strlen(sentence);

    while (end <= len) {
        if (sentence[end] == ' ' || sentence[end] == '\0') {
            strncpy(word, sentence + start, end - start);
            word[end - start] = '\0';
            start = end + 1;

            if (strcmp(word, target) == 0) {
                strcpy(sorted_word, word);
                sort_desc(sorted_word);
                strcat(result, sorted_word);
            } else {
                strcat(result, word);
            }

            if (sentence[end] != '\0') {
                strcat(result, " ");
            }
        }
        end++;
    }

    printf("%s\n", result);

    return 0;
}
