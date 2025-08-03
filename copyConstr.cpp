#include<iostream>
using namespace std;

class cons{
	int a, b;
	public:
		cons();
		cons(int x, int y){
			a=x;
			b=y;
		}
		
	void printNbr(){
			cout<<"The number passed is "<<a<<","<<b<<endl;;
		}
		~cons(){
			cout<<"This is destructor "<<endl;
		}
};
int main(){
	cons con1(5,6);
	con1.printNbr();
	
	cons con2=cons(4,6);
	con2.printNbr();
	
	cons cons1=con2;
	cons1.printNbr();
	return 0;
}
	
