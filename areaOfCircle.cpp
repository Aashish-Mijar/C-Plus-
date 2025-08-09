#include<iostream>
using namespace std;

class Circle
{
	private:
		int radious=1;
		public:
			void setData(int x)
			{
				radious=x;
			}
			void area()
			{
				cout<<"Area of circle is:"<<endl<<3.14*radious*radious<<endl;
			}
};
int main()
{
	Circle circle;
	circle.setData(25);
	circle.area();
	
	Circle small_circle;
	small_circle.setData(12.5);
	small_circle.area();
	return 0;
}
	