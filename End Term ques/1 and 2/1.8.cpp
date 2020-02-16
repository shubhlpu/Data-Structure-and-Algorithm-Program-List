#include<iostream>
using namespace std;
const int N=3;
const int M=3;
int rowsum(int a[M][N],int r,int k)
{
	int sum=0;
	for(int j=0;j<k;j++)
	{
		sum=sum+a[r-1][j];
	}
	return sum;
}

main()
{
	int arr[M][N];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	int y=rowsum(arr,3,3);
	cout<<endl<<y;
}
