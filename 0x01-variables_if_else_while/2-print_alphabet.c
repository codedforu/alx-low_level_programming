#include <stdio.h>

int main(void) {
    char c = 'a';
    do {
        putchar(c);
        c++;
    } while (c <= 'z');
    putchar('\n');
    return 0;
}
