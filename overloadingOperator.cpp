#include<iostream>
using namespace std;

class marks{
	int theory;
	int practical;
	public:
		marks(){
			theory=0;
			practical=0;
		}
		
		marks(int th, int pr){
			theory=th;
			practical=pr;
		}
		
		void print_marks(){
		cout<<theory<<endl;
		cout<<practical<<endl;
	}
	marks operator+(marks m){
		marks temp;
		temp.theory=theory+m.theory;
		temp.practical=practical+m.practical;
		return temp;		
	}
		
};
int main(){
	marks m1(80, 10), m2(70, 12);
	marks m3= m1+m2;
	m3.print_marks();
}