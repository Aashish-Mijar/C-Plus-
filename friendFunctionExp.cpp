#include<iostream>
using namespace std;

//Forward declaration
class Aas1;
class Aas{
	int data;
	
	public:
		void setvalue(int value){
			data=value;
		}
			friend add(Aas o1, Aas1 o2);
		void printValue(){
			cout<<"The value passed is "<<data<<endl;
		}
};

class Aas1{
	int num;
	
	public:
		void setvalue(int value){
			num=value;
		}
		friend add(Aas o1, Aas1 o2);
		
		void printvalue(){
			cout<<"The number passed is "<<num<<endl;
		}
};

void addfun(Aas o1, Aas1 o2)
{
	cout<<"The sum of data from class Aas and Aas1 is "<<Aas.data + Aas1.num<<endl;
}
int main(){
	Aas objA;
	objA.setvalue(10);
	objA.printValue();
	
	Aas1 obj1;
	obj1.setvalue(26);
	obj1.printvalue();
	
	add(objA,obj1);
	return 0;
}