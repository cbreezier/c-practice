#include <stdio.h>

int main(int argc, char *argv[]) {
    char s[1000];
    scanf("%s", s);

    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    printf("%d\n", length);

    return 0;
}
