#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    string subject;
    void display(){
        cout<<"Roll NO.:"<<roll<<"   Name:"<<name<<"   Subject:"<<subject<<endl;
    }
};
int main(){
    student abc1;
    abc1.roll=5;
    abc1.name="Kasmik";
    abc1.subject="Computer";
    
    student abc2;
    abc2.roll=7;
    abc2.name="Junu";
    abc2.subject="Math";
    
    abc1.display();
    abc2.display();
    return 0;
}
