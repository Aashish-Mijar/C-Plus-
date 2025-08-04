#include<iostream>
using namespace std;

class area{
    double r, l, b;
    public:
    area(double r1){
        r=r1;
    }

    area(double l1, double b1){
        l=l1;
        b=b1;
    }

    void get_data1(){
        cout<<"The area of cirle is "<< 3.14*r*r<<endl;
        // cout<<"The area of rectangle is "<<l*b<<endl;
    }
    void get_data2(){
        // cout<<"The area of cirle is "<< 3.14*r*r<<endl;
        cout<<"The area of rectangle is "<<l*b<<endl;
    }
    
};
int main(){
    area a1(12.0);
    area a2(13.9, 14.0);

    a1.get_data1();
    a2.get_data2();

    return 0;
}