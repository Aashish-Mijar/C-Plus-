#include<iostream>
using namespace std;

class employee
{
	private: 
	int a,b,c;
	
	public:
		int  d,e;
		void setdata(int a, int b, int c);
		void getdata()
		{
		cout<<"The value of a,b,c,d,e is "<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
	}
};

void employee :: setdata(int a1, int b1, int c1){
 a=a1;
 b=b1;
 c=c1;
}

int main()
{
employee number;
number.setdata(1,4,5);
number.d=56;
number.e=67;
number.getdata();
return 0; 
}
