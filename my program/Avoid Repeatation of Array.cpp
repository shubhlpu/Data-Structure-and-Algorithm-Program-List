#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"\nEnter no. of elements : ";
	cin>>n;
	int a[n],b[n],c[n],i,j,k=0,l=0;
	cout<<"\nEnter Elements : ";
	for(i=0;i<n;i++)
	cin>>a[i];                              // 1 2 3 2 1
	cout<<"\nSorted Elements are : ";       // 1 2 1 3 2
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[k]=j;//2 4
				k++;
			}
		}
		cout<<b[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			l=0;
			if(i==b[j])
			{
				l=1;
				break;
			}
		}
		if(l==1)
		continue;
		cout<<a[i]<<" ";// 1 2
	}
}
