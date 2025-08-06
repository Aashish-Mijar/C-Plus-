#include<iostream>
using namespace std;

class Gro2;
class Gro{
	int val;
	public:
		void indata(int a){
			val=a;
		}
		friend void exchange(Gro&, Gro2&);
		void display()
	{
			cout<<"The value passed is "<<val<<endl;
		}
};

class Gro2{
	int val2;
	public:
		void indata(int b){
			val2=b;
		}
			friend void exchange(Gro&, Gro2&);
		void display()
		{
			cout<<"The value passed is "<<val2<<endl;
		}
		
};

void exchange(Gro &x, Gro2 &y){
	int temp=x.val;
	x.val=y.val2;
	y.val2=temp;
}

int main(){
	Gro obj1;
	obj1.indata(4);
	obj1.display();
	
	Gro2 obj2;
	obj2.indata(10);
	obj2.display();
	exchange(obj1, obj2);
	
//	cout<<"The value after swaping is ";
	obj1.display();
	
//	cout<<"The value after swaping is ";
	obj2.display();
	return 0;
	}