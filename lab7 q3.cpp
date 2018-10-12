#include <iostream>
using namespace std;
int even(int n){
     if (n==0)
     return 0;
     else if(n%2==0)
     cout<<n<<endl;
     return even(n-1);
 }
int main() {
       int even(int n);
       cout << "enter the number upto which you want to print all even naturals "<<endl;
       int n;
       cin>>n ;
       cout<< " the even numbers are "<<endl;
       cout<< even(n) << endl;
 return 0;
 }
    
     
