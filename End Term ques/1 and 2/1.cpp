#include<iostream>
using namespace std;
main()
{
	int *p=new int[10];
	cout<<"Enter the value in arrays\n";
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
	}
	cout<<"\nValues at even places are :";
	for(int i=0;i<10;i++)
	{
		cout<<endl;
		if(i%2==0)
		cout<<*(p+i);
	}
}
