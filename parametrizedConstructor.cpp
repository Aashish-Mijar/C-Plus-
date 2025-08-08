#include<iostream>
using namespace std;

/*class complex{
	int a, b;
	
	public:
		complex(int x, int y){
			a=x;
			b=y;
		}
		void printNbr(){
			cout<<"The given number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

//void complex:: complex(int x, int y)
//{
//	a=x;
//	b=y;
//}  

int main(){
	complex c1(4,6);
	
	complex c2=complex(6,7);
	
	c1.printNbr();
	c2.printNbr();
	return 0;
	
}*/

class areaRec{
	int length, breadth;
	public:
		areaRec(int x, int y){
			length =x;
			breadth=y;
		}
		void printArea(){
			cout<<"The area of rectangle is "<<(length*breadth)<<endl;
		}
};

int main(){
	areaRec cobj1(13,14);
	cobj1.printArea();
	
	areaRec cobj2=areaRec(12,4);
	cobj2.printArea();
	
	return 0;
}



class vertex{
	int p1, p2;
	
	public:
	vertex(int a , int b )
	{
	p1=a;
	p2=b;
}
	void display_vertex(){
		cout<<"The vertex of triangle is "<<"("<<p1<<","<<p2<<")"<<endl;
	}
};

int main(){
	vertex v1(4,6);
	v1.display_vertex();
	
	return 0;
	}

