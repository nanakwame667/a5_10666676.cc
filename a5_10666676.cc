#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string name;
	int ID;
	int age;
	string gender;
	int score;
	char grade;
	float marks,sum=0,sum1=0,average=0;
	for(int i=1;i<=5;i++)
	{
		cout<<i<<":Enter your name=\t"<<endl;
		cin>>name;
		cout<<i<<":Enter your ID number=\t"<<endl;
		cin>> ID;
		cout<<i<<":how old are you=\t"<<endl;
		cin>> age;
		cout<<i<<":Gender=\t"<<endl;
		cin>> gender;
		cout<<i<<":Enter your marks=\t"<<endl;
		cin>> score;
	cout<<i<<":Enter your grade=\t"<<endl;
	cin>> grade;
		


		sum=sum+score;
		sum1=sum+age;
	}
	average=sum/5;
	cout<<"Average is =\t"<<average<<endl;
	age=sum1/5;
	cout<<"Average age is=\t"<<age<<endl;

	return 0;
}
