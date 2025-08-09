#include<iostream>
#include<string>
using namespace std;

class Mystring{
	private:
		char* str;
		public:
			Mystring(const char* s){
				str= new char[strlen(s)+1];
				strcpy(str, s);
			}
			Mystring(){
				delete[]str;
			}
			Mystring operator+(const Mystring& other) const{
				char* newstr=new char[strlen(str)+ strlen(other.str)+1];
				strcpy(newstr, str);
				strcat(newstr, other.str);
				Mystring result(newstr);
				delete[]newstr;
				return result;
			}
			Mystring& operator+=(const Mystring& other){
				char* newstr = new char[strlen(str)+ strlen(other.str)+1];
				strcpy(newstr, str);
				strcat(newstr, other.str);
				delete[]str;
				str= newstr;
				return *this;
			}
			
			friend std::ostream& operator<<(std::ostream& out, const Mystring& mystr){
				out<<mystr.str;
				return out;
			}
};

int main(){
	Mystring str1("Hello,");
	Mystring str2("Aashish");
	
	Mystring result = str1+str2;
	cout<<"concatenated string "<<result<<endl;
	
	str1+=str2;
	cout<<"In place concatenated: "<<str1<<endl;
}