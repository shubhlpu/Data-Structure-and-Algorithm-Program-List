#include<iostream>
using namespace std;
main()
{
	int a[50],i,j,l,min;
	cout<<"Enter the size of an array-";
	cin>>l;
	cout<<"Enter an array element-";
	for(i=0;i<l;i++)
	{
	cin>>a[i];	
	}	
	for(i=0;i<l-1;i++)
	{
		min=i;
	for(j=i+1;j<l;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	if(min!=i) 
		{
		int temp;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		}
	}
    
	cout<<"Sorted array are-";
	for(i=0;i<l;i++)
	{
		cout<<a[i]<<endl;
	}
}
