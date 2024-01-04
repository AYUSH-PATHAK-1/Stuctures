#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int removeDuplicate(int arr[],int n){
    sort(arr,arr+n);
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}


int main(){
  int arr[]={1,1,2,2,2,3,3,7,5,2,3,1,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=removeDuplicate(arr,n);
  std::cout << "the array after removing duplicate is " << std::endl;
  for (int i=0;i<k;i++){
      cout<<arr[i]<<endl;
  }
  
   
}
