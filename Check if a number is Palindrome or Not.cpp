#include <iostream>

using namespace std;

int reverse(int X){
    int Y=0;
    while(X>0){
         //Extract the last digit
      int digit = X % 10;
      //Appending last digit
      Y = Y * 10 + digit;
      // Shrinking X by discarding the last digit
      X = X / 10;
    }
    return Y;
}


int main(){
    int X=121;
    int dummy=X;
    int Y=reverse(X);
    if(dummy==Y){
        std::cout << "Palindrome Number" << std::endl;
    }else{
        cout<<"NoT Palindorme Number";
    }
    return 0;
}
