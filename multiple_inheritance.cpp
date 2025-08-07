#include<iostream>
using namespace std;

class Animal{
	int legs;
	int tail;
	public:
		void set_features(void);
		void getfeatures(){
			cout<<"The animals have "<<legs<<" legs";
			cout<<"The animals have "<<tail<<" tail";
		}
};
void Animal::set_features(int x, int y){
	legs=x;
	tail=y;
	
}

class mammal{
	int legs;
	int tail;
	public:
		void set_adv(void);
		void getadv(){
			cout<<"The mammal has "<<legs<<" legs";
			cout<<"The mammal has "<<tail<<" tail";
		}
};
void mammal::set_adv(int a, int b){
	legs=a;
	tail=b;
}

class cow: public Animal, public mammal{
	int horn;
	public:
		void match();
		void show();
};
void cow::match(){
	
}