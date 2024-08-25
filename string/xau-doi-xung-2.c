#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char s[1000005];
    gets(s);
    printf("%d", strlen(s) - 1);
}