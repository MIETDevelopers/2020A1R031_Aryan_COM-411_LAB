// Addition of two numbers of different classes using friend function
//code by Aryan Verma
#include<iostream>
using namespace std;
class B;
class A
{
  private:
    int numA;
  public:
  	void input()
  	{
  		cout<<"Enter the Number A : ";
		cin>>numA;	
	}
    friend int add(A, B);
};
class B
{
  private:
    int numB;
  public:
  	void input()
  	{
  		cout<<"\nEnter the Number B : ";
		cin>>numB;	
	}
    friend int add(A , B);
};
int add(A objectA, B objectB)
{
  return (objectA.numA + objectB.numB);
}
int main()
{
 	int c;
  	A objectA;
 	B objectB;
  	objectA.input();
  	objectB.input();
  	c = add(objectA,objectB);
  	cout<<"\nThe Sum of A and B is : "<<c;
  	return 0;
}
