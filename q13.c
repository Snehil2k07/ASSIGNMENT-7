#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int n;
    int symmetric = 1, skew = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (a[i][j] != transpose[i][j]) {
                symmetric = 0;
            }

            if (a[i][j] != -transpose[i][j]) {
                skew = 0;
            }
        }
    }

    if (symmetric)
        printf("Matrix is symmetric.\n");
    else if (skew)
        printf("Matrix is skew-symmetric.\n");
    else
        printf("Matrix is neither symmetric nor skew-symmetric.\n");

    return 0;
}