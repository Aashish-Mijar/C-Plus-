#include<iostream>
using namespace std;
class base{
    protected:
    int a, b;
    public:
    void set_data(){
        a=24;
        b=3;
    }
    virtual void display(){
        cout<<"This is base class "<<endl;
    }
};

class derived1:public base{
    protected:
    int mul;
    public:
    void process(){
        mul=a*b;
    }

    void display(){
        cout<<"The multiplication of a and b is "<<mul<<endl;
        cout<<"This is derived class "<<endl;
    }
};

class derived2:public base{
    protected:
    int div;
    public:
};

int main(){
    base b;
         base *b1;
        derived1 d1, d2;
         b1=&d1;
         
         derived1 *d;

         d= &d1;
         
         d->set_data();
         d->process();
         d->display();

        // b1->set_data();
        // b1->display();
         return 0;
}