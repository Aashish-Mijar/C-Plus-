#include<iostream>
using namespace std;

class Myclass
{
	private:
		int value;
		
		public:
			Myclass(int val):value(val){
			}
			Myclass operator+(const Myclass& other)
			{
				return Myclass(value + other.value);
			}
			
			int getvalue() const{
				return value;
			}
};

int main()
{
 Myclass obj1(5);
 Myclass obj2(34);
 
 Myclass result = obj1+obj2;
 cout<<"obj1+obj2 is "<<result.getvalue()<<endl;
 return 0;
 }