#include<iostream>
#include<cstring>
using namespace std;

class student{
	protected:
//		char name[16];
		int roll_Number;
		
		
		public:
			void set_rollnumber(int);
			void get_rollnumber(){
//				cout<<"The name is "<<name<<endl;
				cout<<"The Roll number is "<<roll_Number<<endl;
			}
};
void student::set_rollnumber(int y){
	roll_Number=y;
}

class Exam:public student{
	protected:
		double Digital;
		double Cpp;
		double Maths;
		
		public:
			void setmarks(double, double, double);
			void getmarks(void);
};
void Exam::setmarks(double a, double b, double c){
	Digital = a;
	Cpp = b;
	Maths = c;
}

void Exam::getmarks(){
	cout<<"The marks obtained in Digital is "<<Digital<<endl;
	cout<<"The marks obtained in Cpp is "<<Cpp<<endl;
	cout<<"The marks obtained in Maths is "<<Maths<<endl;
}

class Result:public Exam{
	double percentage;
	
	public:
		void display()
		{
			get_rollnumber();
			getmarks();
			cout<<"Your percentage is "<<(Digital+Cpp+Maths)/3<<"%"<<endl;
		}
};

int main(){
	Result Aashish;
	Aashish.set_rollnumber(02);
	Aashish.setmarks(98,96,99);
	Aashish.display();
	
	return 0;
}