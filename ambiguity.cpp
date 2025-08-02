#include<iostream>
using namespace std;

class Base1{
	int data;
	public:
//		void set_number(void);
		void get_data(){
			cout<<"This is base class "<<endl;
		}
		
};
class Base2{
	int data2;
	public:
//		void set_data();
		void get_data(){
			cout<<"This is base class 2 "<<endl;
		}
};

class Derived:  public Base1, public Base2{
	int data3;
	public:
//		void setdata();
		void get_data(){
			cout<<"This is Derived from base 1 and base 2 "<<endl;
		
		}

};
int main(){
	Derived d;
	d.get_data();
	
	return 0;
}