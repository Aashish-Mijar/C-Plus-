#include<iostream>
using namespace std;

int main(){
	char opr;
	double n1;
	double n2;
	double result;
	
	cout<<"Welcome to calculator: "<<endl;
	
	cout<<"Enter either (+,-,*,/) of the operator: ";
	cin>>opr;
	
	cout<<"Enter number 1: ";
	cin>>n1;
	
	cout<<"Enter number 2: ";
	cin>>n2;
	
	switch(opr){
		case '+':
			result= n1+n2;
			cout<<"The result is "<<result;
			break;
		case '-':
			result= n1-n2;
			cout<<"The result is "<<result;	
			break;
		case '*':
			result= n1*n2;
			cout<<"The result is "<<result;
			break;
		case '/':
			result= n1/n2;
			cout<<"The result is "<<result;
			break;
		default:
			cout<<"Not a valid operator !"<<endl;
	}
}