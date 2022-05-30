//program to add,subtract,multiply and divide using inheritance
#include<iostream>
using namespace std;
class Parent
{
	public :
		int a,b,add,sub,mul,div;
		
	public : 
		void get()
		{
			cout<<"Enter the Values for A and B : \n";
			cin>>a>>b;
		} 
		void calculate()
		{
			add = a + b;
			sub = a - b;
		}
		void display()
		{
			cout<<"\nAddition = "<<add;
			cout<<"\nSubtraction = "<<sub;
		}
};
class Child : public Parent
{
	public : 
		void cal()
		{
			mul = a * b;
			div = a / b;
		}
		void output()
		{
			cout<<"\nMultipliction = "<<mul;
			cout<<"\nDivision = "<<div;
		}
};
int main()
{
	Child c;
	c.get();
	c.calculate();
	c.cal();
	c.display();
	c.output();
}
