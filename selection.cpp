#include <iostream>

using namespace std;

void printarray(int arr[], int length){
     for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Adding a newline at the end
}

int main(){
    int arr[]={7,8,3,1,2};
    int length = sizeof(arr) / sizeof(arr[0]); 
    
    for (int i = 0; i < length - 1; i++) {
        int smallest=i;
        for (int j = i+1; j < length ; j++) {
            // Correcting the syntax of the if statement
            if (arr[smallest] > arr[j]) {
                smallest=j;
            }
        }
            int temp=arr[smallest];
            arr[smallest]=arr[i];
            arr[i]=temp;
        
    }
    printarray(arr, length);
}
