#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Bubble Sort are-";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void insertionsort(int a[],int n)
{
	int i,j,k,l;
	for(i=1;i<n-1;i++)
	{
		l=a[i];
		k=i-1;
		while(l<a[k] && k>=0)
		{
			a[k+1]=a[k];
			k=k-1;
		}
		a[k+1]=l;
	}
	cout<<"Insertion sort are-";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void selectionsort(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
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
	cout<<"Selection sort are-";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int partition(int a[],int lo,int high)
{
	int i,j,pivot,temp;
	pivot=a[high];
	i=lo;
	j=high;

	while(1)
	{
		while(a[i]<pivot && a[i]!=pivot)
		i++;
		while(a[j]>pivot && a[j]!=pivot)
		j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			return j;
		}
	}
}
int quicksort(int a[],int lo,int high)
{   
    int i;
	if(lo<high)
	{
		int l=partition(a,lo,high);
		quicksort(a,lo,l-1);
		quicksort(a,l+1,high);
	}
	cout<<"Quicksort are-";
	for(i=lo;i<=high;i++)
	{
		cout<<a[i]<<endl;
	}
}
int merge(int a[],int lo,int high,int mid)
{
	int i,j,k,temp[high-lo+1];
	i=lo;
	k=0;
	j=mid+1;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	for(i=lo;i<=high;i++)
	{
		a[i]=temp[i-lo];
	}
}
int mergesort(int a[],int lo,int high)
{   int i;
	int mid;
	if(lo<high)
	{
		mid=(lo+high)/2;
		mergesort(a,lo,mid);
		mergesort(a,mid+1,high);
		merge(a,lo,high,mid);
	}
	cout<<"Merge sort are-";
	for(i=lo;i<=high;i++)
	{
		cout<<a[i]<<endl;
	}
}
void heapify(int a[],int n,int i)
{
	int largest,l,r;
	largest=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n && a[l]>a[largest])
	{
		largest=l;
	}
	if(r<n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		int temp;
		temp=a[largest];
		a[largest]=a[i];
		a[i]=temp; 
		heapify(a,n,largest);
	}
}
void heapsort(int a[],int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		int temp;
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a,i,0);
	}
	cout<<"Heap sort are-";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
main()
{
	int i,a[50],n,choice;
	cout<<"Enter the size of an array-";
	cin>>n;
	cout<<"Enter an array element-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\t Press 1 for bubble sort \n \t press 2 for insertion sort\n\t Press 3 for selection sort \n\t Press 4 for quicksort\n \t Press 5 for mergesort \n \t Press 6 for heap sort\n\t";
	cout<<"Enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				bubblesort(a,n);
				break;
			}
		case 2:
			{
				insertionsort(a,n);
				break;
			}
		case 3:
			{
				selectionsort(a,n);
				break;
			}
		case 4:
			{
				quicksort(a,0,n-1);
				break;
			}
		case 5:
			{
				mergesort(a,0,n-1);
				break;
			}
		case 6:
			{
				heapsort(a,n);
				break;
			}
		default :
			{
				cout<<"*******************wrong choice**************";
			}
	}
}
