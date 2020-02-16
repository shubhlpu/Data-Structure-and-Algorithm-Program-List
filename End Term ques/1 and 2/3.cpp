#include<iostream>
using namespace std;
main()
{

	int * p= new int [10];
	cout<<"\nEnter the details\n";
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
	}
	int sum=0;
	float average=0;
	for(int i=0;i<10;i++)
	{
		sum=sum+*(p+i);
	}
	average = sum/10;
	cout<<"\nSum is : "<<sum<<"\nAverage is  : "<<average;
}
