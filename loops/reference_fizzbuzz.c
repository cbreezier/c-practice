#include <stdio.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0) {
                printf("Fizz");
            }
            if (i % 5 == 0) {
                printf("Buzz");
            }
        } else {
            printf("%d", i);
        }
        printf("\n");

        i++;
    }

    return 0;
}
