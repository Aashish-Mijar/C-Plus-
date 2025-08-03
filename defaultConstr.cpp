#include<iostream>
using namespace std;

class complex{
	int a, b;
	
	public:
		complex(void);
		void printNbr(){
			cout<<a<<endl<<b;
		}
};

complex::complex(void){
	a=10;
	b=0;
}

int main(){
	complex c;
	c.printNbr();
	return 0;
}