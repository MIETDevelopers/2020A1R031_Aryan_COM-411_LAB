#include <iostream>
using namespace std;
class student
{ // private data member
private:
    string name;
    int roll_no;
    float math_marks, science_marks, english_marks;
    // public member function
public:
    // constructor
    student(string n, int r, float m, float s, float e)
    {
        name = n;
        roll_no = r;
        math_marks = m;
        science_marks = s;
        english_marks = e;
    }

    void print()
    { // member function can access private data members
      // name, roll_no, math_marks, science_marks, english_marks
        cout << "Name :" << name << endl
             << "Roll no: " << roll_no << endl
             << "Marks in Maths: " << math_marks << endl
             << "Marks in Science: " << science_marks << endl
             << "Marks in English: " << english_marks << endl;
    }
    float avg()
    {
        cout << "Average marks of student: ";
        float mark = (math_marks + science_marks + english_marks) / 3;
        cout << mark << endl;
        return mark;
    }
    // destructor
    ~student()
    {
    }
};
class course
{
    // private member function
    // can't be accessed outside the class
private:
    string cname;
    string code;
    string in_charge;
    // public member function
    // can be accessed outside the class
public:
    // constructor
    course(string n, string c, string i)
    {
        cname = n;
        code = c;
        in_charge = i;
    }
    void display()
    { // member function can access private data members
        // cname, code, in_charge
        cout << "Course name: " << cname << endl
             << "course code: " << code << endl
             << "Course in-charge: " << in_charge << endl;
    }
    // destructor
    ~course()
    {
    }
};
// main function
int main()
{
    student s("Arjun", 3, 4, 5, 6);
    student s1("Ram", 5, 6, 4, 4);
    s.print();
    s.avg();
    s1.print();
    s1.avg();
    cout << endl
         << "For course class......." << endl;
    course c("Java", "COM-474", "Rishi Gupta");
    course c1("Python", "COM-443", "Naveen");
    c.display();
    cout << endl;
    c1.display();

    return 0;
}