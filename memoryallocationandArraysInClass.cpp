#include<iostream>
using namespace std;

class shop{
	int itemid[100];
	int itemprice[120];
	int counter;
	
	public:
		void initcounter(void)
{
	counter = 0;
}
void setprice(void);
void displayprice(void);
};
void shop:: setprice(void)
{
	cout<<"Enter Id of your name "<<counter++<<endl;
	cin>>itemid[counter];
	
	cout<<"Enter price of your item "<<endl;
	cin>>itemprice[counter];
	counter++;
}


void shop::setprice(void)
{

	for(int i=0; i<counter; i++)
	{
		cout<<"The price of item with Id "<<itemid<< " is "<<itemprice[i]<<endl;
	}
}

int main()
{
	shop dukan;
	dukan.initcounter();
	dukan.setprice();
	dukan.displayprice();
	return 0;
	}
