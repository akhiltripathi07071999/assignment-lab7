#include<iostream>
using namespace std;
int HCF(int n,int m)
{
	if(m==0)
	{
		return n;
	}
	else
	{
		return HCF(m,n%m);
	}
		

}
int main()
{
	int n,m,hcf;
	cout<<"Type the numbers whose hcf you want to know : ";
	cin>>m>>n;
	hcf=HCF(n,m);
	cout<<"The HCF of "<<n<<" and "<<m<<" is "<<hcf<<endl; 
	return 0;
}
	
	
