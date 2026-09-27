#include <stdio.h>

int main() {
    int arr[100];
    int n, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new element: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    // Check whether position is valid
    if (position < 1 || position > n + 1) {
        printf("Invalid position.");
        return 0;
    }

    // Shift elements towards right
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[position - 1] = element;

    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}