#include <iostream>
using namespace std;
void num(int n)
{    if (n>0) 
     { 
        num(n-1);
        cout<<n<<endl;
   }
}
int main() 
  {
 int n;
 cout<<"Enter any number :"<<endl;
 cin>>n;
 cout<<"The series of numbers are"<<endl;
 num(n);
 return 0;
 }

