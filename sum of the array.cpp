#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int n=5;
    std::vector<int>arr={1,2,3,4,5};
    int sum=0;
    for (int i=0;i<n;i++){
    sum+=(double)arr[i];
    }
    std::cout << "the Sum is " << sum << std::endl;
   
}


you can also use the accumlator function in c++
