//Student management system
#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    int studentId;
    int admNo;
    char name[50];
    int rollNO;
    char section;
    float marks;
    Student()
    {
        cout<<"____________STUDENT MANAGEMENT SYSTEM____________"<<endl;

    }
    void getdata()
    {
        cout<<"Enter the Student Name - "<<endl;
        cin>>name;
        cout<<"Enter the Student ID - "<<endl;
        cin>>studentId;
        cout<<"Enter the admission number - "<<endl;
        cin>>admNo;
        cout<<"Enter the Section - "<<endl;
        cin>>section;
        cout<<"Enter the Roll NO - "<<endl;
        cin>>rollNO;
        cout<<"Enter the Student marks - "<<endl;
        cin>>marks;
    }
   ~Student()
   {

   } 
   void display()
   { 
        cout<<"*************STUDENT DETAILS****************"<<endl;
        cout<<"Student Name		:"<<name<<endl;
        cout<<"Student ID		:"<<studentId<<endl;
        cout<<"Admission number	:"<<admNo<<endl;
        cout<<"Section  		:"<<section<<endl;
        cout<<" Roll NO 		:"<<rollNO<<endl;
        cout<<" Student marks   	:"<<marks<<endl;
   }
   

};
class Course
{
	public:
		int courseId;
		char name[50];
		char courseCode[25];
		int totalCourse;
		Course()
		{
			//constructor
			cout<<"________Course Details________"<<endl;
		}
		void getdata1()
		{
			cout<<"Enter the Course Id "<<endl;
			cin>>courseId;
			cout<<"Enter the Name of Course"<<endl;
			cin>>name;
			cout<<"Enter the Course Code"<<endl;
			cin>>courseCode;
			cout<<"Enter the No. of Course Enrolled in"<<endl;
			cin>>totalCourse;
		}
		void display1()
		{
			cout<<"**********COURSE DETAILS*************"<<endl;
			cout<<" COURSE ID		:"<<courseId<<endl;
			cout<<" Course Name 		:"<<name<<endl;
			cout<<" Course Code		:"<<courseCode<<endl;
			cout<<" Enrolled Course	:"<<totalCourse<<endl;
		}
		~Course()
		{
			//destructor
		}
};
int main()
{
    Student S;
    S.getdata();
    Course C;
    C.getdata1();
    S.display();
    C.display1();
    return 0;
}
