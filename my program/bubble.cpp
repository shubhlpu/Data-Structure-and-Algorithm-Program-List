#include<iostream>
using namespace std;
main()
{
	int i,a[50],n,temp;
	cout<<"Enter the size of an array-";
	cin>>n;
	cout<<"Enter an array element-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array are-";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
