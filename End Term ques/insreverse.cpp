#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int ptr=i-1;
		while(ptr>=0 && key>arr[ptr])
		{
			arr[ptr + 1]=arr[ptr];
			ptr--;
		}
		arr[ptr+1]=key;
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
	insertionsort(a,n);
}
