#include<iostream>
#include<cstring>
using namespace std;

class student{
	string name;
	int roll_number;
	
	public:
		student(){
		}
		
		student(string n1, int roll ){
			name=n1;
			roll_number=roll;
		}
		
		void display(){
			cout<<"The name of the student is "<<name<<endl;
			cout<<"The roll number of the student is "<<roll_number<<endl;
		}
};

class marks: public student{
	int sub1;
	int sub2;
	
	public:
		marks(int s1, int s2){
			sub1=s1;
			sub2=s2;
		}
		
		void display(){
			cout<<"The mark of student in subject one is "<<sub1<<endl;
			cout<<"The mark of student in subject two is "<<sub2<<endl;
		}
		
};

class result: public student, public marks{
};
int main(){
	
	return 0;
}