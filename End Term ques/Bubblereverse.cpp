#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}
main()
{
	int a[10];
	int n=10;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubblesort(a,n);
}
