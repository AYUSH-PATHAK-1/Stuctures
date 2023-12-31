#include <iostream>

using namespace std;

// Correcting the function declaration
void printarray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Adding a newline at the end
}

int main() {
    int arr[] = {7, 8, 3, 1, 2};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            // Correcting the syntax of the if statement
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Passing the array and its length to the function
    printarray(arr, length);

    return 0;
}
