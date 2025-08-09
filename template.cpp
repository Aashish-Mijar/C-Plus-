#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"Overloading template display 1: ";
    cout.precision(2);
    cout<<x<<'\n';
    cout<<endl;
}

template<class T, class T1>
void display(T x, T1 y){
    cout<<"Overloading template display 2: "<<x<<" , "<<y<<'\n';
    cout<<endl;
}

void display(int x, int y, int z){
    cout<<"Explict display :"<<x<<'\t'<<y<<'\t'<<z<<endl;
    cout<<endl;
}

int main(){
    display(23.230987);
    display<float>(12.45, 14.34);
    display(12, 13, 15);
    display('%');
    display<string>("Aashish");
    return 0; 
}
