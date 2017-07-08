#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
    int n;
    char line[1005];

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        fgets(line, 1000, stdin);

        char strippedLine[1005];
        int j = 0;
        int k = 0;
        while (line[j] != '\n') {
            if (line[j] >= 'a' && line[j] <= 'z') {
                strippedLine[k] = line[j];
                k++;
            } else if (line[j] >= 'A' && line[j] <= 'Z') {
                strippedLine[k] = line[j] + ('a' - 'A');
                k++;
            }
            j++;
        }
        strippedLine[k] = '\0';

        int anagram = TRUE;
        for (int l = 0; l < k / 2; l++) {
            if (strippedLine[l] != strippedLine[k - l - 1]) {
                anagram = FALSE;
            }
        }

        if (anagram) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
