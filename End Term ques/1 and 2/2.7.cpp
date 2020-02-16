#include<iostream>
using namespace std;

main()
{
	int arr[5];
	int arr2[5];
	int temp;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<5-1;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<" "<<arr[i];
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(arr2[j+1]<arr2[j])
			{
				int temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<" "<<arr2[i];
	}
	int arr3[10];
	int x,y;
	x=0;
	y=0;
	for(int i=0;i<10;i++)
	{
		if(arr[x]>arr2[y])
		{
			arr3[i]=arr2[y];
			y++;
		}
		else
		{
			arr3[i]=arr[x];
			x++;
		}
	}
	cout<<endl;
	for (int i=0;i<10;i++)
	{
		cout<<" "<<arr3[i];
	}
}
