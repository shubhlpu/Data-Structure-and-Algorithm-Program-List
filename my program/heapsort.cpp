#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n &&arr[l]>arr[largest])
	{
		largest=l;
	}
	if(r<n && arr[r]>arr[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
		heapify(arr,n,largest);
	}
}
void heapsort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		
		heapify(arr,i,0);
	}
	
}
main()
{
	int arr[50],n,i;
    cout<<"Enter the size of an array-";
    cin>>n;
    cout<<"Enter an element array-";
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	heapsort(arr,n);
	cout<<"Sorted array are-";
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<endl;
	}
}

