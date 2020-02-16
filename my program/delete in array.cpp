#include<iostream>
using namespace std;
main()
{
	int i,j,n,a[50];
	cout<<"Enter the size of an array-";
	cin>>n;
	cout<<"Enter an element in array-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position no. which u want to delete-";
	cin>>j;
	for(i=j;i<n-1;i++)
	{
	  a[i]=a[i+1];	
	}
	n=n-1;
	cout<<"New array are-";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;
	}
}
