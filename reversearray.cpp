#include <iostream>

using namespace std;


void printarray(int arr[],int n){
    std::cout << "the reversed array is:-" << std::endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
}

void reversearray(int arr[],int n){
    int p1=0;int p2=n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;p2--;
    }
    printarray(arr,n);
}

int main(){
    int n=6;
    int arr[]={6,5,4,3,2,1};
    reversearray(arr,n);
}
