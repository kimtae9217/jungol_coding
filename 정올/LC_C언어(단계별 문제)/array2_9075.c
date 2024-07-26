#include <stdio.h>

int main()
{
    int arr[10] ={0};
    int input;

    while(1){
        
        scanf("%d", &input);
        if(input == 0){
            break;
        }
        arr[(input % 10)]++; // 일의 자리 숫자 저장
    }

    for(int i = 0; i < 10 ; i++){
        if(arr[i] != 0)
        printf("%d : %d개\n", i, arr[i]);
    }

    return 0;
}

