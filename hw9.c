#include <stdio.h>
#include <string.h>

void convCase(char *sentence) {
    const int diff = 'a' - 'A';

    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] += diff;
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] -= diff;
        }
    }
}

int main(void) {
    printf("입력> ");

    char sentence[101];
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    convCase(sentence);

    printf("변환된 문장: %s\n", sentence);

    return 0;
}
