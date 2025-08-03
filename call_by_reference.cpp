#include<iostream>
using namespace std;

void swap (int* a, int*b)
{
int temp =*a;
*a=*b;
*b=temp;
}
int main()
{
	int x=4, y=5;
	cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
	
	
	swap(&x, &y);
	cout<<"After swaping."<<endl;
	cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
	
}
// Swaping by using reference variable
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