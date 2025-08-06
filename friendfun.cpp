#include<iostream>
using namespace std;

class complex{
	int a, b;
	public: 
	void setnumber(int x, int y){
		a=x;
		b=y;
	}
	friend complex sumcomplex(complex o1, complex o2);
	void printNumber(){
		cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
	}
	
};
complex sumcomplex(complex o1, complex o2)
{
	complex o3; 
	o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
	return o3;
}
int main()
{
	complex c1,c2,sum;
	c1.setnumber(1,4);
	c1.printNumber();
	
	c2.setnumber(5,8);
	c2.printNumber();
	
	sum= sumcomplex(c1,c2);
	sum.printNumber();
	
	return 0;
}