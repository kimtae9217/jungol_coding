#include <stdio.h>
#include <string.h>

int main(){

    char c;
    char str[100];
    int cnt = 0;

    while(1){
        scanf(" %c", &c);
        str[cnt++] = c;

        if(c == '0')
            break;
    }

    for(int i = 0; i < cnt; i++)
        printf("%c -> %d\n", str[i], str[i]);
        
    return 0;
}