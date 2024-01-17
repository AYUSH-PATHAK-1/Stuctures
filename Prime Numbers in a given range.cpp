#include <iostream>
#include <math.h>
using namespace std;
bool checkprime(int num)
{
  if (num == 1)
    return false;
  for (int i = 2; i < sqrt(num); i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}
void PrintPrimesbwrange(int a, int b)
{
  for (int i = a; i <= b; i++)
  {
    if (checkprime(i))
    {
      cout << i << " ";
    }
  }
}
int main()
{
    int a,b;
//   int a = 11, b = 17;
  cout<<"enter two numbers"<<endl;
  std::cin >> a;
//   cout<<endl;
  cin>>b;
  PrintPrimesbwrange(a, b);
  return 0;
}
