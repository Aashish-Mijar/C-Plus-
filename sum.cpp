#include<iostream>
using namespace std;
int main()
{
int a[2],b[3];
int sum=0;
for(int i=0; i<2; i++)
{
	cout <<"Enter first matrix:";
	cin >>a[i];
	
}
int mul;
for(int i=0; i<5; i++)
{
	mul = mul*a[i]; 
}
cout<<"sum:"<<sum<<endl;
cout<<"mul:"<<mul<<endl;
return 0;
}


