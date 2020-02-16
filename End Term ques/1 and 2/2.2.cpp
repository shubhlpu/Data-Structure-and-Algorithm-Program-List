#include<iostream>
using namespace std;
main()
{
	int **ary=new int*[3];
	for(int i=0;i<3;i++)
	{
		ary[i]=new int[3];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>ary[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<endl<<*(*(ary+i)+j);
		}
	}
}
