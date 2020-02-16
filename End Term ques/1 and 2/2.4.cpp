#include<iostream>
using namespace std;
main()
{
	int a[5],temp;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{	
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}                                              
	}
	cout<<"\nEnter the element you want to print : ";
	int k;
	cin>>k;
	for(int i=0;i<5;i++)
	{
		cout<<endl<<a[i];
	}
	cout<<endl<<a[5-k];
}
