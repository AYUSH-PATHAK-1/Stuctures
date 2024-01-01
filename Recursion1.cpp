#include <iostream>
using namespace std;

class Re1{
    public:
    void printNumb(int i,int n,int sum){
        if(i==n){
            sum+=i;
            cout<<sum<<endl;
            return;
        }
        sum+=i;
        printNumb(i+1,n,sum);
        cout<<i<<endl;
    }
};

int main(){
    
    Re1 obj;
    // int n=1;
    obj.printNumb(1,5,0);
}
