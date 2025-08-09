#include<iostream>
#include<cstring>
using namespace std;
class media{
	protected:
	string title;
	double price;
	
	public:
		media(string s, double pr){
			title=s;
			price=pr;
		}
		
		virtual void display()=0;
};

class book: public media{
	protected:
		int pages;
		
		public:
			book(string s, double pr, int pgs):media(s, pr){
				pages=pgs;
			}
			void display();
			
};

class recording: public media{
	protected:
		float playTime;
		
		public:
			recording(string s, double pr, float pTime):media(s, pr){
				playTime=pTime;
			}
					void display();
};

void book:: display(){
	cout<<"--------Book Details---------"<<endl;
	cout<<"Book title :"<<title<<endl;
	cout<<"Book price :"<<price<<endl;
	cout<<"Total pages :"<<pages<<endl;
}

void recording::display(){
cout<<"----------Recording Details--------"<<endl;
cout<<"Book title :"<<title<<endl;
cout<<"Book price :"<<price<<endl;
cout<<"Total time :"<<playTime<<endl;
}

int main(){
	string name;
	double price;
	float time;
	int page;
	
	//Book details-------
	cout<<"--------Media Info----------"<<endl;
	cout<<endl;
	cout<<"Enter title of book "<<'\t';
	getline(std::cin, name);
	
	cout<<"Enter price of book "<<'\t';
	cin>>price;
	
	cout<<"Enter total pages "<<'\t';
	cin>>page;
	book(name, price, page);
	
	//Recording details------------
	cout<<"Enter title of book "<<'\t';
	getline(std::cin, name);
	
	cout<<"Enter price of book "<<'\t';
	cin>>price;
	
	cout<<"Enter total time "<<'\t';
	cin>>time;
	recording(name, price, time);
	
	book book1(name, price, page);
	recording tape(name, price, time);
	
	media *list[2];
	list[0]=&book1;
	list[1]=&tape;
	
	cout<<"----------Media Details-------------"<<endl;
	list[0]->display();
	list[1]->display();
	}

