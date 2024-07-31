#include <stdio.h>

int main(){

    int words[5][20] = {0};

    for(int i = 0; i < 5; i++){
        scanf("%s", words[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s\n", words[i]);
    }

    return 0;
}