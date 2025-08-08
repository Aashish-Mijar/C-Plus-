#include<iostream>
using namespace std;

int area(int a, int b){
	int s=a*b;
	return s;
	
}
int main(){
	int length, breadth;
	cout<<"Enter the length ";
	cin>>length;
	
	cout<<"Enter the breadth ";
	cin>>breadth;
	
	int area1=area(length, breadth);
	
	cout<<"The area of rectangle having length "<<length<<" and breadth "<<breadth<<" is "<<area1<<"cm^2";
	
	return 0;
	
}