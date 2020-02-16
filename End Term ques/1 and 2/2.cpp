#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	string name;
	int marks;
};
main()
{
	struct student *p=new student[2];
	cout<<"Enter the details of students";
	for(int i=0;i<2;i++)
	{
		cout<<"\nEnter the name of student\n";
		cin>>(p+i)->name; 
		// or we can also use *(p+i).name
		cout<<"\nEnter the marks of student\n";
		cin>>(p+i)->marks;
	}
	cout<<endl<<"Details are : \n";
	for(int i=0;i<2;i++)
	{
		cout<<"\n name of student\n";
		cout<<(p+i)->name;
		cout<<"\n marks of student\n";
		cout<<(p+i)->marks;
	}
}
