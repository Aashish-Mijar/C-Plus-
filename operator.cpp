#include<iostream>
using namespace std;

void sample()
{
	static int a=13;
	a++;
	
	int b=12;
	b++;
	
	cout<<"Value of a is "<<a<<endl;
	cout<<"Value of b is "<<b<<endl;
	cout<<endl;
}
 int main()
 {
 	sample();
 	sample();
 	sample();
	sample();
	sample();
	sample();
	sample();
 }