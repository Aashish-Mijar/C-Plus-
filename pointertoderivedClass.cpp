#include<iostream>
using namespace std;

class base{
		public:
int data1;

	virtual	void display(){
		cout<<"1 The data in base class is "<<data1<<endl;
	}	
};

class derived: public base{
			public:
		int data2;
	
			void display(){
				cout<<"2 The data in base class is "<<data1<<endl;
				cout<<"2 The data in derived class is "<<data2<<endl;
			}
};
int main()
{
		derived obj_derived;
	base *base_class_pointer;
	base obj_baseclass;
	base_class_pointer= &obj_derived;
	base_class_pointer->data1=34;
	base_class_pointer->data2=40;
	base_class_pointer->display();
	

//	derived *derived_class_pointer;
//	derived_class_pointer=&obj_derived;
//	
//	derived_class_pointer->data1=4000;
//	derived_class_pointer->data2=500;
//	derived_class_pointer->display();	
//	return 0;
}