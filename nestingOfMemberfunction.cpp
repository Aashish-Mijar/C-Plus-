#include<iostream>
using namespace std;

class Binary
{
	string s;
	public:
		void read(void);
		void check_bin(void);
		void ones_complement(void);
		void display(void);
		
};

void Binary :: read(void){
	cout<<"Enter binary "<<endl;
	cin>>s;
}

void Binary::check_bin(void){
	
	for(int i=0; i<s.length(); i++){
		if(s.at(i)!='0'&&s.at(i)!='1'){
			cout<<"The given numbers are not binary";
			exit(0);
		}
	}
} 
void Binary::ones_complement(void)
{
	check_bin();
for(int i=0; i<s.length();i++)
{
	if(s.at(i)=='0'){
		s.at(i)='1';
	} else
	{
	s.at(i)='0';
	}
}
}

void Binary::display(void)

	{
		cout<<"Displaying the binary number: ";

	for(int i=0; i<s.length(); i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
	}
	

int main(){
	Binary two;
	two.read();
	//two.check_bin();
	two.display();
	two.ones_complement();
	two.display();
	return 0;
}