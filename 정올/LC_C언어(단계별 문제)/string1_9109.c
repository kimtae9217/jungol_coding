#include <stdio.h>

int main(){
    char str[100];
    int cnt = 0;

    for(int i = 0; i < 100; i++){
        scanf("%c", &str[cnt]);

        if(str[cnt] == '\n')
            break;

        cnt++;
    }
    
    for(int i = 0; i < cnt; i++){
        printf("%c", str[i]);
    }
    return 0;    
}
