#include<iostream>
using namespace std;
template <class T>
class test{
    T a, b;
    public:
    void set_data(){
        cout<<"Enter a and b"<<endl;
        cin>>a>>b;
    }
    void get_data(){
        cout<<"You entered : "<<a<<" and "<<b<<endl;
        cout<<"The sum of entered number is "<<a+b<<endl;
        cout<<endl;
    }

};
int main(){
    test<int>t1;
    t1.set_data();
    t1.get_data();

    test<float>t2;
    t2.set_data();
    t2.get_data();

    test<char>t3;
    t3.set_data();
    t3.get_data();

    return 0; 
}