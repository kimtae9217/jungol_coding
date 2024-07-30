#include <stdio.h>

int MaxMin(int x);

int main(){

    int n;
    scanf("%d", &n);
    MaxMin(n);

    return 0;
}

int MaxMin(int x){
    
    printf("10큰수 : %d\n", x + 10);
    printf("10작은수 : %d", x - 10);
    
    return 0;
}