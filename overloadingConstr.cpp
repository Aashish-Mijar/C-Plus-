#include<iostream>
using namespace std;

class Age
{
private:
	int age;

public:
	Age(int x=0)
	{
		age=x;
	
	}
	
	Age(Age &obj1)
	{
	age=obj1.age;
	}
	int getData()
{
	return age;
}
};
int main()
{
	Age obj1(18);
	Age obj2(obj1);
	cout<<"Age is ";
	cout<<obj2.getData();
}
