#include<iostream>
using namespace std;
main()
{
	int * p= new int [10];
	cout<<"\nEnter the Real numbers\n";
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
	}
	float positive,negative;
	int sum=0,count=0;
	for(int i=0;i<10;i++)
	{
		if(*(p+i)>0)
		{
			sum=sum+*(p+i);
			count++;
		}
		
	}
	positive = sum/count;
	cout<<"\nAverage of positive number is : "<<positive;
	sum=0;
	count=0;
	for(int i=0;i<10;i++)
	{
		if(*(p+i)<0)
		{
			sum=sum+*(p+i);
			count++;
		}
		
	}
	negative = sum/count;
	cout<<"\nAverage of negative number is : "<<negative;
}
