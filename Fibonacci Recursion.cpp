#include <iostream>

using namespace std;

class Re1{
    public:
    void printfb(int a,int b,int n){
        if(n==0){
            return;
            
        }
        int c=a+b;
        cout<<c<<endl;
        printfb(b,c,n-1);
    }
};


int main(){
    
    int a=0;int b=1;
    cout<<a<<endl<<b<<endl;
    int n=7;
    Re1 obj;
    obj.printfb(a,b,n-2);
}
