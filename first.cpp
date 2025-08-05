#include<iostream>
#include<cmath>
using namespace std;

class calc{
    int a, b;
    public:
    void set_data();
    void get_data();
};

void calc::set_data(){
    cout<<"Enter value of a and b "<<'\t'<<endl;
    cin>>a>>b;
    cout<<"***********************************"<<endl;
    cout<<endl;
}

void calc:: get_data(){
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    cout<<"The pow of "<<a<<" to "<<b<<" is "<<pow(a, b)<<endl;
    cout<<"The cos  of "<<a<<" is"<<cos(a)<<" and cos of "<<b<<" is "<<cos(a)<<endl;
    
}
int main(){
    calc c1;
    c1.set_data();
    c1.get_data();

 return 0;
}
