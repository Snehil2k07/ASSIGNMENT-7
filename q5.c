#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least 2 elements are required.");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;
    smallest = secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {

        // Find largest and second-largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // Find smallest and second-smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", secondLargest);
    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", secondSmallest);

    return 0;
}