#include <stdio.h>

int main() {
    int i, j, matrix_a[3][3], matrix_b[3][3], addition_ab[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the number for matrix_a[%d][%d]: ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the number for matrix_b[%d][%d]: ", i, j);
            scanf("%d", &matrix_b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            addition_ab[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    printf("Addition of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", addition_ab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
