#include <stdio.h>

int main() {
    int arr[100], n, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input original array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input new element to insert
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insert at the end
    arr[n] = element;
    n++;  // Increase the size

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
