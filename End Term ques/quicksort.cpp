#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low-1;
	int temp;
	for(int j = low;j<=high-1;j++)
	{
		if(arr[j]<=pivot){
			i=i+1;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	i=i+1;
	temp=arr[i];
	arr[i]=arr[high];
	arr[high]=temp;
	return(i+1);
}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi = partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}

main()
{
	int array[]={10,35,6,78,45,2,99};
	int n=7;
	quicksort(array,0,n-1);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<array[i];
	}
}
