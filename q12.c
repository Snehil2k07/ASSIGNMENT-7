#include <stdio.h>

int main() {
    int a[10][10];
    int m, n, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Row-wise sum
    for (int i = 0; i < m; i++) {
        sum = 0;

        for (int j = 0; j < n; j++) {
            sum = sum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    // Column-wise sum
    for (int j = 0; j < n; j++) {
        sum = 0;

        for (int i = 0; i < m; i++) {
            sum = sum + a[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}