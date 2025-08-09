#include<iostream>
using namespace std;

class Employee{
	int id;
	static int count;
	public:
		void setdata(void){
			cout<<"Enter the id"<<endl;
			cin>>id;
			count++;
		}
		
		void getdata(){
			cout<<"The id of thid employee is "<<id<<" and this is employee number "<<count<<endl;
		}
		
};
int Employee::count=100;
int main(){

Employee Aashish;
Aashish.setdata();
Aashish.getdata();
return 0;
}