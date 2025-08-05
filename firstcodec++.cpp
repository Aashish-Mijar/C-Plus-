#include<iostream>
using namespace std;
int main()
{
char a[10];
int array[5]={1,2,3,4,5};
int sum=0, mul=1;
for(int i=0; i<5; i++)
{
	sum+= array[i];
}

for(int i=0; i<5; i++)
{
	mul = mul*array[i]; 
}
cout<<"sum:"<<sum<<endl;
cout<<"mul:"<<mul<<endl;
return 0;
}


