#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char str[11];
    scanf("%s", str);
    int dem[10] = {0};
    for(int i = 0; i < strlen(str); i++) {
        int num = str[i] - '0';
        if(num == 2 || num == 3 || num == 5 || num == 7) {
            dem[num]++;
        }
    }
    for(int i = 0; i < strlen(str); i++) {
        if(dem[str[i]-'0'] > 0) {
            printf("%c %d\n", str[i], dem[str[i]-'0']);
            dem[str[i]-'0'] = 0;    
        }
    }
}