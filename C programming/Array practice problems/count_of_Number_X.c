#include <stdio.h>

int main() {
    int n, x, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search (x): ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }

    printf("Number %d occurs %d time(s) in the array.\n", x, count);

    return 0;
}
