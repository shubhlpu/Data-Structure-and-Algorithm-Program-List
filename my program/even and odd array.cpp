#include<iostream>
using namespace std;
main()
{
	int i,j,a[50],b[50],c[50];
	cin>>j;
	for(i=0;i<j;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<j;i++)
	{    
		if(a[i]%2==0)
		
		{    
		
		     b[i]=a[i];
		cout<<"Even array are-"<<endl;
			cout<<b[i]<<endl;
		}
		else
		
		{   
		    
			c[i]=a[i];
			cout<<endl<<"Odd array are-"<<endl;
			cout<<c[i]<<endl;
		}
	}
}
