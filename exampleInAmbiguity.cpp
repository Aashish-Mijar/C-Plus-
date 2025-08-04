#include<iostream>
using namespace std;

class student{
	protected:
		int rollNo;
		public:
			void set_number(int a){
				rollNo=a;
			}
			void print_rollnumber(void){
				cout<<"Your roll no is: "<<rollNo;
			}
};

class Test: virtual public student{
	protected:
		double maths, digital;
		public:
			void set_marks(double a, double b){
				maths=a;
				digital=b;
				
			}
			void print_marks(){
				cout<<"The marks in maths is "<<maths<<endl;
				cout<<"The marks in digital is "<<digital<<endl;
			}
};
class sports:virtual public student{
	protected:
		double score;
		public:
			void set_score(double x){
				score=x;
			}
			void print_score(){
				cout<<"Your score is "<<score<<endl;
			}
};
class Result: public Test, public sports{

	double total;
	public:
		void display(){
			print_rollnumber();
			print_marks();
			print_score();
			cout<<"Your total marks is "<<maths+digital+score;
		}
		
};

int main(){
	Result re1;
	re1.set_number(2);
	re1.set_marks(39,40);
	re1.set_score(8);
	re1.display();
	
	return 0;
}