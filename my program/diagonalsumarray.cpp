#include<iostream>
using namespace std;
main()
{
	int a[50][50],i,j,sum=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
				a[i][j]++;
			}
		}
	}
	cout<<sum;
}
