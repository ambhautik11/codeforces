
#include <stdio.h>
#include<string.h>

char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};

int isVowel(char c) {
    int i;
    for ( i = 0; i < 6; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char s[100];
    int i;
    scanf("%s",s);
    for ( i = 0; i < strlen(s); i++) {
        s[i] = tolower(s[i]);
        if (!isVowel(s[i])) {
            printf(".%c",s[i]);
        }
    }
     printf("\n");

}
