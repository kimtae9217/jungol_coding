#include <stdio.h>

int main()
{
    int num;
    int arr[100]={0};

    while(1){
        scanf("%d", &num);
        if(num == 0)
            break;

        arr[num / 10]++;
    }

    for(int i = 0; i < 100; i++){
        if(arr[i] != 0)
            printf("%d : %d\n", i, arr[i]);
    }

    return 0;
}