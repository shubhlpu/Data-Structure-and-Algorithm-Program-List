#include<iostream>
using namespace std;
main()
{
	int a[10],mid,last,beg,loc=-1,no;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	beg=0;
	last=9;
	cin>>no;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(a[mid]==no)
		{
			loc=mid;
			break;
		}
		else if(a[mid]<no)
		{
			beg=mid+1;
		}
		else if(a[mid]>no)
		{
			last=mid-1;
		}

	}
	if(loc!=-1)
	cout<<" Element found at: "<<loc+1;
}
