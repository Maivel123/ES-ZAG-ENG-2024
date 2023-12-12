
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char* token;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strlen(sentence) - 1] = '\0';  // Remove the trailing newline character

    printf("Words in the sentence:\n");


    token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
