#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    int maxLen = 0;

    for(int i=0; s[i] != '\0'; i++){
        int visited[256] = {0};
        int len = 0;

        for(int j=i; s[j] != '\0'; j++){
            if(visited[(unsigned char)s[j]] == 1)
                break;
            visited[(unsigned char)s[j]] = 1;
            len++;
        }

        if(len > maxLen)
            maxLen = len;
    }

    printf("Length = %d\n", maxLen);
    return 0;
}

