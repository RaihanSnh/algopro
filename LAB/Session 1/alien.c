#include <stdio.h>

int main() {
    char word1[255], word2[255], word3[255], word4[255], word5[255], word6[255];

    scanf("%s %s %s", &word1, &word2, &word3);
    scanf("%s %s %s", &word4, &word5, &word6);

    printf("%sszs %sszs %sszs\n", word1, word2, word3);
    printf("%sszs %sszs %sszs\n", word4, word5, word6);
    
    return 0;
}

