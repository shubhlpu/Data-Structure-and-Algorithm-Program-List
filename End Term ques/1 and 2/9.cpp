#include<iostream>
#include<string.h>
using namespace std;
struct emp
{
	string name;
	int exp;
	int salary;
};
main()
{
	int n;
	cout<<"\nEnter the numebr of employees\n";
	cin>>n;
	struct emp *p=new emp[n];
	for(int i=0;i<n;i++)
	{
		cin>>(p+i)->name;
		cin>>(p+i)->exp;
		cin>>(p+i)->salary;
	}
	for(int i=0;i<n;i++)
	{
		if((p+i)->salary<=10000 && (p+i)->exp>5)
		{
		cout<<"\nDetails of employees are\n";
		cout<<(p+i)->name;
		cout<<(p+i)->exp;
		cout<<(p+i)->salary;
		}
	}
}
