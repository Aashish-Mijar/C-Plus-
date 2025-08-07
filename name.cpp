#include<iostream>
using namespace std;
int main()
{
	int array[5];
	
	array[0]=1;
	array[1]=2;
	array[2]=3;
	array[3]=5;
	array[4]=6;
	int sum=0;
	for(int i=1; i<=5; i++){
		sum+= array[i];
	}
	cout <<"sum:" <<sum <<endl;
	
	int a;
	cout <<"Aashish" <<a <<endl;
	return 0;
}
