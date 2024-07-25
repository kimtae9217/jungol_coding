#include <stdio.h>

int main() {
    int arr[11] = {0}; 
    int num;

    while (1) {
        scanf("%d", &num);
        if (num < 1 || num > 10) { // 입력된 정수가 범위를 벗어나면 루프 종료
            break;
        }
        arr[num]++;
    }

    
    for (int i = 1; i <= 10; i++) {
        if (arr[i] > 0) {
            printf("%d : %d개\n", i, arr[i]);
        }
    }

    return 0;
}
