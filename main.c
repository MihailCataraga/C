#include <stdio.h>

int main(void)
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {1, 5, 3, 4},
        {1, 2, 9, 4}
    };

    for(int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }
    return 0;
}
