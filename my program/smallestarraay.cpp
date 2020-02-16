#include<iostream>
using namespace std;
main()
{
	int i,n,j,a[50];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	int e=a[0];
	int b=a[n-2];
	cout<<"Smallest-"<<e;
	cout<<"Second largest-"<<b;
	
}
