#include<iostream>
using namespace std;
void fun(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
main()
{
	int a,b;
	cout<<"Enter the values in  A and B\n";
	cin>>a>>b;
	fun(&a,&b);
	cout<<"\nValue of A is now  : "<<a<<endl;
	cout<<"\nValue of B is now  : "<<b<<endl;
}
