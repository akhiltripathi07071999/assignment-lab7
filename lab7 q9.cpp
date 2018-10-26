#include<iostream>
using namespace std;
int factorial(int a)
{if (a<1)
	return 1;
else
{	a*factorial(a-1);
	return a*factorial(a-1);
}}
int main(){
int n;
cout<<"Enter the number whose factorial you want"<<endl;
cin>>n;
int i=factorial(n);
cout<<i<<endl;
return 0;
}
