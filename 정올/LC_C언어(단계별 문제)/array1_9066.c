#include <stdio.h>

int main ()
{
    char arr[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int n = sizeof(arr) / sizeof(char);
    for (int i = n - 1 ; i >= 0; i--) 
    {
        printf("%c ", arr[i]);
    }

    return 0;
}