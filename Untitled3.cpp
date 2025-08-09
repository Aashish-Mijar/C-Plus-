#include<iostream>

class MyClass{
	public:
		MyClass(int value): data(value) {
			std::cout<<"Parameterized constructor called with value "<<value<<std::endl;
		}
		MyClass(const MyClass& other) : data(other.data) {
			std::cout<<"copy constructor called"<<std::endl;
		}
		int getData() const {
			return data;
		}
	private:
		int data;
};

int main(){
	MyClass obj1(41);
	MyClass obj2 = obj1;
	std::cout<<"obj2 data:"<<obj2.getData()<<std::endl;
	std::cout<<"obj1: "<<obj1.getData()<<std::endl;
	return 0;
}