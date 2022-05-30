//Program to find the factorial of a given number
//code by Aryan Verma
#include<iostream>
using namespace std;
class Factorial
{
	private : int i,fact = 1,number;
	
	public : void input()
			 {
			 	cout<<"Enter the Number : ";
				cin>>number;		 
			 }
			 void display()
			 {
			 	for(i=1;i<=number;i++)
				{
			 		fact = fact*i;		
				}
				cout<<"The Factorial of required number is : "<<fact;
			 }
};
int main()
{
	Factorial F;
	F.input();
	F.display();
	return 0;	
}
