#include<iostream>
using namespace std;
main()
{
	int a[50],i,item,n,beg,mid,last;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>item;
	beg=0;
	last=n-1;
	while(beg<=last)
	{   
		mid=(beg+last)/2;
		if(a[mid]==item)
		{
			cout<<"element present at location-"<<mid;
			break;
		}
		else if(a[mid]<item)
		{
			beg=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
}
