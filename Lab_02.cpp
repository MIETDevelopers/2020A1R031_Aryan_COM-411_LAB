//To input details of students and printing the name of student having highest marks
//code by Aryan Verma
#include<iostream>
using namespace std;
class Students
{
	private :  char name[20];
	           int rollnumber;
	           float marks;
			   
	public :	void input()
				{
					cout<<"\nName: ";
					cin>>name;
					cout<<"Roll No: ";
					cin>>rollnumber;
					cout<<"Marks: ";
					cin>>marks;		
				}   	
				float marksset()
				{
					return marks;
				}
				void print()
				{
					cout<<"\n"<<marks<<" is the highest marks scored by "<<name;
				}
};
int main()
{
	Students S[100];
	int i,n;
	cout<<"Enter the number of students : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the Name, Roll Number and Marks of the student : \n"<<i+1;
		S[i].input();
	}
	int loc = 0;
	float marks = 0.0;
	for(i=0;i<=n-1;i++)
	{
		if(S[i].marksset() > marks)
		{
			marks = S[i].marksset();
			loc = i;
		}
	}
	S[loc].print();
	return 0;
}
