#include <stdio.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num);

    int i = 0;
    while (i < num) {
        printf("%d\n", i + 1);
        i++;
    }

    return 0;
}
