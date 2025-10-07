//Delete an element from an array
#include <stdio.h>

void deleteElement(int arr[], int *size, int index) 
{
    if (index < 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Initial size

    printArray(arr, size);
    deleteElement(arr, &size, 2);

    printf("After deleting element at index 2:\n");
    printArray(arr, size);
    deleteElement(arr, &size, 5);

    return 0;
}
