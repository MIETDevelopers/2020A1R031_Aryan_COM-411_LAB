#include <iostream>
using namespace std;
class Area
{
private:
    float radius;

public:
    void input()
    {
       cout << "Enter the Radius:\n";
        cin >> radius; 
    }
    void output()
    {
        cout << "Area of Circle:" << 3.14 *
        radius*radius;
    }
};
int main()
{
    Area a;
    a.input();
    a.output();
    return 0;
}