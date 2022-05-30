//Program to  calculate area of rectangle using inheritance
#include<iostream>
using namespace std;
class length
{
	public : 
		int x,y,Area;
		void get()
		{
			cout<<"Enter the Length : ";
			cin>>x;
		}
		void display()
		{
			cout<<"\nLength = "<<x;
		}
};
class breadth : public length
{
	public : 
		void input()
		{
			cout<<"\nEnter the Breadth : ";
			cin>>y;
		}
		void output()
		{
			cout<<"\nBreadth = "<<y;
		}
};
class area : public breadth
{
	public : 
		void calculate()
		{
			Area = x * y;
		}
		void inp()
		{
			cout<<"\nArea = "<<Area;
		}
};
int main()
{
	area c;
	c.get();
	c.input();
	c.calculate();
	c.display();
	c.output();
	c.inp();
	return 0;
}