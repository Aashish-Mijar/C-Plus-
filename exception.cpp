#include<iostream>
// #include<cmath>
using namespace std;
int main(){
    int num=23, n, grab=0;
    try{
        if(num<=1) throw(num);{
            cout<<"The num is not a prime number "<<endl;
        }
    }
    catch(int n1){
        for(int i=2; i<=num/2; i++){
            if(n%i==0){
                // n++;
                break;
            }
        }
    }
        if(n==0){
            cout<<"The given number is prime number. "<<endl;

        }
        else{
            cout<<"The given number is not a prime number. ";
        }
  
   return 0;
}