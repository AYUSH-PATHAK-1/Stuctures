#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertatend(int *arr,int n,int valueend){
    arr[n]=valueend;
}


void insertatbigin(int arr[],int n,int value){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
}


void insertatbtween(int *arr, int n, int valuee, int pos){
    for (int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=valuee;
}

int main(){
  int n=8;
//   int nn=9;
  int pos = 5;
  int arr[9]={10,9,14,8,20,48,16,9};
  int valueend=76;
  int value=40;
  int valuee=88;
  std::cout << "before Adding the value the array is " << std::endl;
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  insertatbigin(arr,n,value);
  cout<<"after Adding the value the array is" << endl;
  for(int i=0;i<=n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
   insertatend(arr,n,valueend);
  cout<<"after Adding the value the array is at end" << endl;
  for(int i=0;i<=n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  insertatbtween(arr,n,valuee,pos);
  cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  
   
}
