#include<iostream>
using namespace std;

int  area(float r);
int  area(float l, float b);

int main(){
    float r1, l1, b1;
    cout<<"Enter the radius of the cirle "<<'\t'<<endl;
    cin>>r1;
    cout<<"The area of circle is "<<area(r1)<<endl;

    cout<<"Enter the length and breadth of the rectangle "<<'\t'<<endl;
    cin>>l1>>b1;
    cout<<"The area of rectangle is "<<area(l1, b1)<<endl;
 
   

    //  cout<<"The area of the circle is :"<<endl; 
    

    return 0;
}
int area(float r){
    float a1;
    a1=3.14*r*r;
    return a1;
    //  cout<<"The area of the circle is :"<<endl; 
    
}

int  area(float l, float b){
  float a2;
  a2=l*b;
    return a2;
    //  cout<<"The area of the circle is :"<<endl; 
      
}