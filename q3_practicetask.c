#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int sum = 0;
    int product = 1;

    printf("Enter elements of a 3x3 matrix:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }

    printf("\nSum of all elements = %d\n", sum);
    printf("Product of all elements = %d\n", product);

    return 0;
}
