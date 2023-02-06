#include <stdio.h>


int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    char *p;

    printf("Enter a string: ");
    scanf("%s", str);

    p = str;
    while (*p != '\0') {
        
            if (*p == 'a' || *p == 'e' || *p == 'i' ||
                *p == 'o' ||*p == 'u') {
                vowels++;
            } else {
                consonants++;
            }
                p++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
