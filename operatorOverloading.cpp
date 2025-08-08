#include<iostream>
using namespace std;

class Aashish{
	private:
		int value;
	public:
		//Aashish(int val):value(val){
		//}
		int setdata(int value);
			
		
		//overloading the operator
		Aashish operator++()
		{
			value+=1000;
			return *this;
		}
		int getvalue(){
			return value;
		}
};
 int Aashish ::setdata(int value1){
 	value =value1;
 }
int main()
{
	Aashish number operator++;
	number.setdata(18);
	//use of overloaded operator
	number++;
	cout<<"Value is "<<number.getvalue()<<endl;
	//number.getvalue();
}