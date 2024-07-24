#include <stdio.h>

int main()
{
    int arr[100];
    int num;

    for (int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        if (arr[i] == 0){
            num = i;
            break;
        }
    }

    for (int i = num - 1; i >= 0; i--){
        printf("%d ", arr[i]); 
    }


    return 0;
}