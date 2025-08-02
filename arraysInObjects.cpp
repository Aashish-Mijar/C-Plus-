#include<iostream>
using namespace std;

class Employee{
	int id;
	double salary;
	
	public:
		void setId(void){
			salary=15000;
			cout<<"Enter the id of employee"<<endl;
			cin>>id;
		}
		void getId(void){
			cout<<"The Id of this employee is "<<id<<endl;
		}
};

int main(){
	Employee me[4];
	for(int i=0; i<4; i++){
		me[i].setId();
		me[i].getId();
	}
		return 0;
	}
	