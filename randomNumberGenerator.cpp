#include<iostream>
using namespace std;

int main(){
	string name;
	cout<<"Enter your name: ";
	getline(std::cin, name);
	
//	if(name.length()>12){
//	
//	cout<<"It can't be more than 12 letters ! "<<endl;
//}
//else {
//	cout<<"Welcome "<<name;
//}

//if(name.empty()){
//	cout<<"You didn't enter your name ";
//}
//else {
//	cout<<"Hello "<<name;
//}
//}
//name.clear();
//cout<<"Hello "<<name;
//return 0;

//name.append("@gmail.com");
//cout<<"Your name is "<<name;


//cout<<name.at(0);

//cout<<name.insert(2,"@");

//cout<<name.find(" ");

cout<<name.erase(0, 3);
}


