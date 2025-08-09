#include<iostream>
#include<ctime>

using namespace std;

int main(){
	srand (time(0));
	int randNum=(rand()%5)+1;
//	int n;
//	cout<<"Enter any number from 1-5"<<endl;
//	cin>>n;
	
	switch(randNum){
		case 1:
			std::cout<<"You win a bumer sticker !";
			break;
			
			case 2:
			std::cout<<"You got an life generator card !";
			break;
			
			case 3:
			std::cout<<"You got an mistry box!";
			break;
			
			case 4:
			std::cout<<"You win a 500 coins !";
			break;
			
			case 5:
			std::cout<<"You got a special gift !";
			break;
			
			return 0;
				}
				}
				