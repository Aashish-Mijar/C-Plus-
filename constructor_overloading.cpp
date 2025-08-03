#include<iostream>
using namespace std;
class vertex
{
	int p1, p2;
	
	public:
	vertex(int a , int b )
	{
	p1=a;
	p2=b;
}

vertex(int a){
	p1=a;
	p2=0;
}
	void display_vertex(){
		cout<<"The vertex of triangle is "<<"("<<p1<<","<<p2<<")"<<endl;
	}
};

int main(){
	vertex v1(4,6);
	v1.display_vertex();
	
	vertex v2=vertex(5);
	v2.display_vertex();
	
	return 0;
	}
