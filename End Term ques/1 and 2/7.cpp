#include<iostream>
using namespace std;
main()
{
	int a[10];
	int size=5;
	cout<<"Enter the number in array\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;)
		{
			if(a[j]==a[i])
			{
				for(int k=j;k<10;k++)
				{
					a[k]=a[k+1];	
				}
				size--;
			}
			else
			j++;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
