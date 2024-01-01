#include <iostream>
#include <string>

using namespace std;

class Re1{
    public:
    void thanoi(int n,string src,string helper,string dest){
        if(n==1){
            cout<<"transfer disk  "<<n<<" from  "<<src<<" to  "<<dest<<endl;
            return;
        }
        thanoi(n-1,src,dest,helper);
        cout<<"transfer disk  "<<n<<" from  "<<src<<" to  "<<dest<<endl;
        thanoi(n-1,helper,src,dest);
    }
        
};


int main(){
    
    int n=3;
    Re1 obj;
    obj.thanoi(n,"S","h","D");
}  
