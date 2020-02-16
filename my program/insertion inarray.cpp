#include<iostream>
using namespace std;
main()
{
	int i,j,a[50],n,temp;
	cout<<"Enter the size of an array-";
	cin>>n;
	cout<<"Enter an array element-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position-";
	cin>>j;
	cout<<"Enter an element which u want to insert-";
	cin>>temp;
	for(i=n;i>=j;i--)
	{
		a[i+1]=a[i];
	}
	a[j]=temp;
	n=n+1;
	cout<<"New array are-";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;
	}
}
