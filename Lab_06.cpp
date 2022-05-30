//program to add two complex number
//code by Aryan Verma
#include<iostream>
using namespace std;
class Complex
{
	private :
		int real,imag;
		
	public :
		void input()
		{
			cout<<"Enter the real part for first number : ";
			cin>>real;

			cout<<"\nEnter the imaginary part for first number : ";
			cin>>imag;
		}
		void input_val()
		{
			cout<<"\n"<<"Enter the real part for second number: ";
			cin>>real;

			cout<<"\nEnter the imaginary part for second number : ";
			cin>>imag;
		}
		Complex add(Complex C)
		{
			Complex temp;
			temp.real = real + C.real;
			temp.imag = imag + C.imag;
			return temp;
		}
		void display()
		{
			cout<<"\n"<<"The Complex Number is : \n";
			cout<<real<<" + "<<imag<<"i";
		}
};
int main()
{
	Complex C1,C2,C3;
	C1.input();
	C2.input_val();
	C3 = C1.add(C2);
	C3.display(); 
	return 0;
}
