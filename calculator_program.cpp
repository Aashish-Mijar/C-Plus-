#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    
    
do{
    char opr;
    cout<<"Enter any of the operation(+,-,*,/) "<<endl;
    cin>>opr;
    cout<<"************************************"<<endl;
    

    int num1, num2;
    cout<<"Enter number 1 :"<<'\t';
    cin>>num1;

    cout<<"Enter number 2 :"<<"\t";
    cin>>num2;

    std::cin.clear();
    fflush(stdin);

    switch(opr)
    {
        case '+':
        cout<<"The sum of num1 and num2 is "<<num1+num2<<endl;
         break;
    
       
        case '-':
        cout<<"The subtract of num1 and num2 is "<<num1-num2<<endl;
        break;

        
        case '*':
        cout<<"The mul of num1 and num2 is "<<num1*num2<<endl;
        break;

        
        case '/':
        cout<<"The div of num1 and num2 is "<<num1/num2<<endl;
        break;

        default:
        cout<<"INVALID OPERATOR"<<endl;
        break;
    }
    }while(opr!=5);
    return 0;
}