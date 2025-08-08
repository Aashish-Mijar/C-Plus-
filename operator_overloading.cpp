#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
     int roll_number;

    public:
    void set_roll_number();
    void print_roll_number();

};

void student::set_roll_number(){
    cout<<"Enter the name of student"<<endl;
    getline(std::cin, name);

    cout<<"Enter roll number of student"<<endl;
    cin>>roll_number;
}

void student::print_roll_number(){
    cout<<"The name of the student is "<<name<<endl;
    cout<<"The entered roll number of student "<<roll_number<<endl;
}

class exam:public student{
    protected:
    float sub1, sub2;
    public:
    void set_mark();
    void print_mark();
};

void exam::set_mark(){
    cout<<"Enter marks of subject 1 "<<endl;
    cin>>sub1;

    cout<<"Enter marks of subject 2 "<<endl;
    cin>>sub2;
}

void exam::print_mark(){
    cout<<"The marks in subject 1 is "<<sub1<<endl;
    cout<<"The marks in subject 2 is "<<sub2<<endl;
}

class result: public exam{
    float percentage;
    public:
    void process(){
        set_roll_number();
        set_mark();
        
    }

    void display(){
        cout<<"**************************"<<endl;
        cout<<endl;
        print_roll_number();
        print_mark();
        cout<<"The percentage of student is "<<(sub1+sub2)/2<<"%"<<endl;
    
    }

};
int main(){
    result r1;
    r1.process();
    r1.display();

    return 0;
}