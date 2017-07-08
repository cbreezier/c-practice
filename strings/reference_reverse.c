#include <stdio.h>

int main(int argc, char *argv[]) {
    char s[1005];
    fgets(s, 1000, stdin);

    int length = 0;
    while (s[length] != '\n') {
        length++;
    }

    int i = 0;
    while (i < length / 2) {
        char tmp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = tmp;
        
        i++;
    }

    printf("%s", s);

    return 0;
}
