#include <iostream>
using namespace std;
int add(int n)
 {
    if( n!=0)
    return n + add(n-1);
   return 0;
 }
    
int main()
{  int n;
  cout<<"Enter a natural number"<<endl;
  cin>>n;
  cout<<"The sum of numbers = " <<add(n);
  return 0;
}

 
    
     
