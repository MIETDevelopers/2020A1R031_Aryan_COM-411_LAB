//Addition of complex number using operator overloading.
#include<iostream>
using namespace std;
class Complex
{
	private :
		float real,imag;
	public :
		Complex()
		{
			
		}
		Complex(float r1,float i1)
		{
			real = r1;
			imag = i1;
		}
		Complex operator + (Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
		void display()
		{
			cout<<"Complex Number = "<<real<<" + "<<imag<<"i";
		}
};
int main()
{
	Complex c1(2.0,5.0),c2(3.0,7.0),c3;
	c3 = c1 + c2;
	c3.display();
	return 0;
}
