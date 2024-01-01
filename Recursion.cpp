#include <iostream>
using namespace std;

class Re1{
    public:
    void printNumb(int n){
        if(n==6){
            return;
        }
        cout<<n<<endl;
        printNumb(n+1);
    }
};

int main(){
    
    Re1 obj;
    int n=1;
    obj.printNumb(n);
}
