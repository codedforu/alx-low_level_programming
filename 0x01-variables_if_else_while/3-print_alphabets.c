#include <stdio.h>

int main(void) {
    char c = 'a';
    do {
        putchar(c);
        c++;
    } while (c <= 'z');
    c = 'A';
    do {
        putchar(c);
        c++;
    } while (c <= 'Z');
    putchar('\n');
    return 0;
}
