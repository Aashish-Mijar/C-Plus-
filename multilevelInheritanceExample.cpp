#include<bits/stdc++.h>
using namespace std;

class Base{
	public:
		int l, b;
		void get_data();
};
void Base::get_data(){
	cout<<"Enter value of length: "<<endl;
	cin>>l;
	
	cout<<"Enter value of breadth: "<<endl;
	cin>>b;
}

class Base2:public Base{
	public:
		int area;
		void get_data2();
};

void Base2::get_data2(){
	area=(l*b);
	cout<<"The Area is "<<area<<" cm^2"<<endl;
}

class Base3:public Base2{
	private:
		int h;
		public:
		void set_data3();
		void get_data3();
		
};
void Base3::set_data3(){
	cout<<"Enter the height "<<endl;
	cin>>h;
}

void Base3::get_data3(){
	cout<<"The volume is "<<area*h<<endl;
}
int main(){
	Base3 obj1;
	obj1.get_data();
	obj1.get_data2();
	obj1.set_data3();
	obj1.get_data3();
	
	return 0;
}