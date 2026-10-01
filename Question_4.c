#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {12, 40, 65, 83, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 83;
    bubbleSort(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int index = binarySearch(arr, n, key);
    if (index != -1)
        printf("Found %d at index %d in the sorted array\n", key, index);
    else
        printf("%d not found\n", key);

    return 0;
}