#include<iostream>
using namespace std;

/*class Base{
	int a,b;
	
	public:
		void setdata(int x, int y);
		void printdata(){
			cout<<"The sum of a and b is "<<a+b;
		}
};

void Base ::  setdata(int x, int y){
	a=x; 
	b=y;
}

class Derived : public Base{
	int 
	
};





int main(){
	Base b1;
	b1.setdata(8,9);
	b1.printdata();
	
	return 0;
}*/

class Base{
	int x;
	protected:
		int y;
		
		public:
			int z;
			void setdata();
			void getdata(){
				cout<<"The value of x is "<<x<<endl;
				cout<<"The value of y is "<<y<<endl;
				cout<<"The value of z is "<<z<<endl;
			}
};
void Base :: setdata(void){
	cout<<"Enter three numbers: "<<endl;
	cin>>x>>y>>z;
}

class Derived : public Base{
	public:
			int k;
			
	
				void setdatak()	{
				}
				
				void printdatak(){
					int sum = x+y+k;
					cout<<"sum of three value is "<<sum<<endl;

				}
};

void Derived :: setdatak(void){
	cout<<"Enter value of k is "<<endl;;
	cin>>k;
}

int main(){
	Derived d1;
	d1.setdatak();
	d1.printdatak();
	
//	Base b1;
//	b1.setdata();
//	b1.data();
//	
	return 0;
}