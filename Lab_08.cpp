// Program to copy the values by using copy constructor
#include<iostream>
using namespace std;
class Sample
{
	private	:	float x,y;
	public	:	Sample()   //default constructor
				{
					x = 10.50;
					y = 30;
				}
				Sample(Sample &c)  //copy constructor
				{
					x = c.x;
					y = c.y;
				}
				void display()
				
				{
					cout<<"The value of X is "<<x<<endl;
					cout<<"The value of Y is "<<y<<endl;
				}
};
int main()
{
	Sample s1,s2(s1);
	s1.display();
	s2.display();
	return 0;	
}
