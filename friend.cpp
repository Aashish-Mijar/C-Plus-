#include<iostream>
using namespace std;

class secondSem
{
	private:
		int length;//breadth;
	
	public:
		secondSem(int value):length(value)
		{
			length =x;
			
		}
		
		friend void myFriend(const secondSem& obj);
	};
	void myFriend(const secondSem& obj){
	
	cout <<"Value of Second sem is "<<obj.length<<endl;
//	cout <<"Value of Second sem is "<<obj.breadth<<endl;
	
	
	
}
int main()
{
secondSem obj();
myFriend(obj);

return 0;
}



