#include<iostream>
#include<string>
using namespace std;

class Home
{
private:
	string name;

public:
	Home(string x)
	{
		name=x;
	
	}
	
	Home(Home &obj1)
	{
	name=obj1.name;
	}
	string getData()
{
	return name;
}
};
int main()
{
	Home obj1("Aashish");
	Home obj2(obj1);
	cout<<"Name is ";
	cout<<obj2.getData();
}
