#include<iostream>
using namespace std;
main()
{
	int a[50],j,k,i;
	cout<<"Enter the size of an array-";
	cin>>j;
	cout<<"Enter an array element-";
	for(i=0;i<j;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<j;i++)
	{
		for(int k=0;k<j-i-1;k++)
		{  
		    if(a[k+1]<a[k])
		    {
			int temp;
			temp=a[k+1];
			a[k+1]=a[k];
			a[k]=temp;
		}
		}
	}
	cout<<endl<<"Sorted array element is-";
	for(i=0;i<j;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Enter the element u ant to search-";
	cin>>k;
	int mid,beg,end;
	beg=0;
	end=j-1;

	while(beg<=end)
	{    
	    mid=(beg+end)/2;
		if(a[mid]==k)
		{
			cout<<"Element found at location-"<<mid<<endl;
			break;
		}
		else if(a[mid]>k)
		{
			end=mid-1;
		
		}
		else if(a[mid]<k)
		{
			beg=mid+1;
		}
	    else
	    {
		cout<<"Element not found";
	 }
}
}
