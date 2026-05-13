#include <stdio.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter a string:\n");

    while ((ch = getchar()) != EOF) {

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}