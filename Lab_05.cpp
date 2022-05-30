//program using STRUCTURE which records the player's data and finding the average of the player 
#include<iostream>
using namespace std;
struct Players
{
	char name[20];
	int runs;
	int innings;
	int notout;
	float avg;
};
int main()
{
	Players P[100];
	int i,n;
	cout<<"Enter the number of Players : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<"Enter the Name for Player "<<i+1<<" : ";
		cin>>P[i].name;
		cout<<"Enter the Runs scored : ";
		cin>>P[i].runs;
		cout<<"Enter the number of innings played : ";
		cin>>P[i].innings;
		cout<<"Enter the number of times player has remained not out : ";
		cin>>P[i].notout;

		P[i].avg = (P[i].runs) /  (P[i].innings) - (P[i].notout);
		cout<<"Average of "<<P[i].name<<" is "<<P[i].avg<<"\n";
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(P[i].avg > 50.00)
		{			
			cout<<P[i].name<<" ";
			count++;
		}
	}
	cout<<"are having score more than average.";
	cout<<"\n"<<count<<" players are having score more than average.";
	return 0;
}
