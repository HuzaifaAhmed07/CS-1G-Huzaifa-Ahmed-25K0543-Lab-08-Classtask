#include <stdio.h>

int main() {
    int max = 0;
    int row = 0, col = 0;

    int a[3][3] = {
        {12, 34, 56},
        {72, 4, 6},
        {90, 67, 12}
    };
    max = a[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("\nMaximum value: %d\n", max);
    printf("Found at position: arr[%d][%d]\n", row, col);

    return 0;
}
