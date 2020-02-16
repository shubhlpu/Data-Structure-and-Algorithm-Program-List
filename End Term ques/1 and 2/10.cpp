#include<iostream>
using namespace std;
main()
{
	int *p=new int (5);
	int fre[5],count;
	for(int i=0;i<5;i++)
	{
		cin>>*(p+i);
		fre[i]=-1;
	}
	for(int i=0;i<5;i++)
	{
		count=0;
		for(int j=i+1;j<5;j++)
		{
			if(*(p+i)==*(p+j))
			{
				fre[j]=0;
				count++;
			}
			if(fre[i]!=0)
			{
				fre[i]=count;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		if(fre[i]!=0)
		{
			cout<<"\nElement "<<*(p+i)<<" IS repeated "<<fre[i];
		}
	}
}
