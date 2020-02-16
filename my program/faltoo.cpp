#include<iostream>
using namespace std;
main()
{
	int a[50],n,i,item,j;
	cout<<"Enter the size of an array-";
	cin>>n;
	cout<<"Enter an array element-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position no. to delete an element-";
	cin>>j;
    for(i=j;i<n-1;i++)
    {
    	a[i]=a[i+1];
	}
	n=n-1;
	cout<<"Ne array are-";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
