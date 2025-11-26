#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if(strlen(s) != strlen(t)){
        printf("Not Anagram\n");
        return 0;
    }

    for(int i=0; s[i]; i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(int i=0;i<26;i++){
        if(count[i] != 0){
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

