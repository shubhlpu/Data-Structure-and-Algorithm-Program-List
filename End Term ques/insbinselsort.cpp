#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int ptr=i-1;
		while(key<arr[ptr] && ptr>=0)
		{
			arr[ptr+1]=arr[ptr];
			ptr=ptr-1;
		}
		arr[ptr+1]=key;
	}
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
}

void bubblesort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
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

void selection(int arr[],int n)
{
	int min,loc,temp;
	for(int i=0;i<n-1;i++)
	{
		min=arr[i];
		loc=i;
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				loc=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}
main()
{
	int array[10];
	int n=10;
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	//insertion(array,n);
	bubblesort(array,n);
	//selection(array,n);
}
