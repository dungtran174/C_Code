#include <stdio.h>
#include <string.h>
int main() {
    long long n; scanf("%lld", &n);
    char str[20]; 
    sprintf(str, "%lld", n);
    int len = strlen(str);
    if(len == 1) {
        printf("%s", str);
        return 0;
    }
    char tmp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = tmp;
    if(str[0] == '0') {
        for(int i = 0; i < len - 1; i++) {
            str[i] = str[i + 1];
        }
        str[len - 1] = '\0';
    }
    printf("%s", str);
}