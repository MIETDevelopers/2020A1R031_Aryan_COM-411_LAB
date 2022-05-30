//Program to inout details of student using structure and printing the name of student having maximum marks
#include<iostream>
using namespace std;
struct students
{
	char name[20];
	int rollnumber;
	float marks;
};
int main()
{
	students s[100];
	int n,i,loc = 0;
	float marks = 0.0;
	cout<<"Enter the number of students : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<"Enter the Name for student "<<i+1<<" : ";
		cin>>s[i].name;
		cout<<"Enter the Roll Number : ";
		cin>>s[i].rollnumber;
		cout<<"Enter the Marks : ";
		cin>>s[i].marks;	
	}
	for(i=0;i<n;i++)
	{
		if(s[i].marks > marks)
		{
			marks = s[i].marks;
			loc = i;
		}
	}
	cout<<"\n"<<s[loc].marks<<" is the highest marks scored by "<<s[loc].name;
	return 0;
}
