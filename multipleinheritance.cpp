#include<iostream>
#include<string>
using namespace std;

class student{
	char name[12];
	char faculty;
	int rollNo;
	int Id;
	
	public:
		void setdata(){
			cout<<"Enter name of student:"<<endl;
			cin>>name;
			
			cout<<"Enter faculty"<<endl;
			cin>>faculty;
			
			cout<<"Enter roll number of student:"<<endl;
			cin>>rollNo;
			
			cout<<"Enter id of student:"<<endl;
			cin>>Id;
			
//			name1[12]="Aashsih";
//			faculty='E';
//			rollNo=02;
//			Id=120394;
			}
			
			void getdata(){
				cout<<"The name of student is "<<name<<endl;
				cout<<"The faculty of student is "<<faculty<<endl;
				cout<<"The rollno of student is "<<rollNo<<endl;
				cout<<"The id of student is "<<Id<<endl;
			}
};

class marks{
	public:
	double dl;
	double cpp;
	double maths;
		
		void set_marks(double dl1, double cpp1, double maths1)
		{
			dl=dl1;
			cpp=cpp1;
			maths=maths1;
			
		}
//		int getData(){
//			return dl;
//		}
//		int getData2(){
//			return cpp;
//		}
//		int getData3(){
//			return maths;
//		}
		
		void get_marks(){
			cout<<"The marks of student in DL is "<<dl<<endl;
			cout<<"The marks of student in CPP is "<<cpp<<endl;
			cout<<"The marks of student in Maths is "<<maths<<endl;
		}
};

class Result:public student, public marks{
	double percentage;
	public:
	void process();
	void display();
	
};

void Result::process(){
	percentage=(dl+cpp+maths)/3;
}
void Result::display()
{
	getdata();
	get_marks();
	cout<<"The percentage  is "<<percentage<<"%"<<endl;
}

int main(){
	Result Aashish;
	Aashish.setdata();
	Aashish.set_marks(98,98,97);
	Aashish.process();
	Aashish.display();
	
	return 0;
}
	