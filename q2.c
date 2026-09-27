#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    printf("Element found at position(s): ");

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found.");
    } else {
        printf("\nTotal occurrences = %d", count);
    }

    return 0;
}