#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void countFreq(int arr[],int n){
    std::vector<bool> visited(n,false);
    
    for(int i=0;i<n;i++){
        if(visited[i]==true)
        continue;
        
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        std::cout << arr[i] << " "<< count << std::endl;
    }
}

int main(){
    
    int arr[]={10,5,10,15,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);
    return 0;
   
}
