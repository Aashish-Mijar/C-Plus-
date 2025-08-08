#include<iostream>
using namespace std;

class House
{
private:
		int length=0, breadth=0;
public:
			void setData(int x,int y)
			{
				length=x;
				breadth=y;
				
			}
			void area()
			{
				cout<<"Area of House:"<<endl<<length*breadth;
			}
};
int main()
{
House Aashish;
Aashish.setData(500, 200);
Aashish.area();
return 0;
}
