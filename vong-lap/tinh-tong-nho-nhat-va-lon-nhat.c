#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

long long change(char *str, char a, char b) {
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == a) {
            str[i] = b;
        }
    }
    return atoll(str);
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        char str1[20], str2[20];
        scanf("%s %s", str1, str2);
        long long min = change(str1, '6', '5') + change(str2, '6', '5');
        long long max = change(str1, '5', '6') + change(str2, '5', '6');
        printf("%lld %lld\n", min, max);
    }
}