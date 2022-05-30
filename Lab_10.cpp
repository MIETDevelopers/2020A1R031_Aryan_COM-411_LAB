//program  using realtional operator
#include<iostream>
using namespace std;
class Object
{
	private :
		float a;
	
	public :
		Object(float a1)
		{
			a = a1;
		}
		bool operator > (Object s)
		{
			if(a > s.a)
			{
				return true;
			}
			else
			{
				return false;			
			}
		}
};
int main()
{
	Object o1(10),o2(20);
	if(o1 > o2)
	{
		cout<<"O1 is Bigger";
	}
	else
	{
		cout<<"O2 is Bigger";
	}
	return 0;
}
