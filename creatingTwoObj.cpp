#include<iostream>
using namespace std;

class House // house is class
{
private:
		int length=0, breadth=0;  // member variable 
public:
			void setData(int x,int y) // member function 
			{
				length=x;
				breadth=y;
				
			}
			void area()
			{
				cout<<"Area of House:"<<endl<<length*breadth<<endl;
			}
};
int main()
{
House aashish; // aashish is object 1 here 
aashish.setData(500, 200);
aashish.area();

House mira; // mira is object 2
mira.setData(700, 800); // accessing objects 
mira.area(); // calling area function
return 0;
}
