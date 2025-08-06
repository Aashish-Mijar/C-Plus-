#include<iostream>
using namespace std;

class Number{
	int a, b;
	
	public:
		void setnumber(int x, int y){
			a=x;
			b=y;
		}
		friend Number muxnumber(Number o1, Number o2);
		void printNumber(){
			cout<<"The sum of a and b is"<<endl<<a*b<<endl;
			
		}
};
Number muxnumber(Number o1, Number o2)
{
	Number o3;
	o3.setnumber((o1.a+o2.b), (o1.a-o2.b));
	return o3;
}
int main(){
	Number Num1, Num2, Num3;
	Num1.setnumber(5,40);
	Num1.printNumber();
	
	// Num2.setnumber(4,5);
	// Num2.printNumber();
	
	Num3=muxnumber(Num1, Num1);
	Num3.printNumber();
	
	
	
	return 0;
}