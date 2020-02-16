#include<iostream>
#include<string.h>
using namespace std;
struct emp
{
	string name;
	int id;
	int salary;
};
main()
{
	int n;
	cout<<"\nEnter the nu8mber of employees\n";
	cin>>n;
	struct emp *p=new emp[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the details of employee repectively\n Name : ";
		cin>>(p+i)->name;
		cout<<"\nID : ";
		cin>>(p+i)->id;
		cout<<"\nSalary : ";
		cin>>(p+i)->salary;
	}
}
