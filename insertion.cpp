#include <iostream>

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {7, 8, 1, 3, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort
    for (int i = 1; i < length; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            // Keep swapping
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    printArray(arr, length);

    return 0;
}
