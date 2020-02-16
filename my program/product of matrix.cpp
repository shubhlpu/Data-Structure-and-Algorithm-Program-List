#include<iostream>
using namespace std;
main()
{
	int a[3][3],b[3][3],mul[3][3],i,j;
	cout<<"Enter first matrix element- "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			cout<<"\t";
		}
		cout<<"\t";
		cout<<endl;
	}
	cout<<"Enter second matrix element- "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	cout<<"Product of tro matrices-"<<" ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{  
	      mul[i][j]=0;
			for(int k=0;k<3;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
			cout<<endl<<mul[i][j]<<endl;
		}
	}
}
