#include <stdio.h>

int main(int argc, char *argv[]) {
    long long w, l, h;
    scanf("%lld %lld %lld", &w, &l, &h);

    long long edgeLength = 4*w + 4*l + 4*h;
    long long area = 2*w*l + 2*w*h + 2*l*h;
    long long volume = w*l*h;

    printf("%lld %lld %lld\n", edgeLength, area, volume);

    return 0;
}
