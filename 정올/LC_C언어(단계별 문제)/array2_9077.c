#include <stdio.h>

int main() {

  int arr[3][3] = {{3,5,4}, {2,6,7}, {8,10,1}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
  
  return 0;
}
