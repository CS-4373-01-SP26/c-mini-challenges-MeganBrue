#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverser(char* word)
{
    char* one = word;
    char* two = word + strlen(word) - 1;
    for (int i = 0; i < strlen(word)/2; i++)
    {
        char temp = *one;
        *one = *two;
        *two = temp;
        one++;
        two--;
    }
}

void transform(char* word, void (*reverser)(char*))
{
    printf("Your word is %s.\n", word);
    reverser(word);
    printf("Your transformed word is %s.\n", word);

}

int main() {
    char* word = malloc(50 * sizeof(char));
    printf("What is your word?\n");
    scanf("%50s", word);
    transform(word, reverser);
    free(word);
    return 0;
}