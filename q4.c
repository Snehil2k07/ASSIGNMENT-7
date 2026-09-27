#include <stdio.h>

int main() {
    int arr[100];
    int n, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &position);

    // Check if position is valid
    if (position < 1 || position > n) {
        printf("Invalid position.");
        return 0;
    }

    // Shift elements to the left
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}