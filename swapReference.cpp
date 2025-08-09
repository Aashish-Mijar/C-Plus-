#include<iostream>
using namespace std;

void swapRef(int &a, int &b)
{

 int temp = a;
a=b;
b=temp;
}
int main()
{
	int x=4, y=5;
	swapRef(x, y);
	cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
	return 0;
}