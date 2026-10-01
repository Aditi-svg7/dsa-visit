#include <stdio.h>


int main() {
    int arr[10], n, i, j, temp;
    // Prompt the user to enter the number of elements in the array

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Prompt the user to enter the elements of the array

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element

            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Print the sorted array

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}