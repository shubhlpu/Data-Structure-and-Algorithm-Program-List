#include<iostream>
using namespace std;
int stack[10];
int top=-1;
int push()
{
	int a,d;
	cin>>d;
	cout<<"\n";
	top=top+1;
	stack[top]=d;
	a=stack[top];
	cout<<a<<"-Element pushed"<<endl;
	
}
int pop()
{
	if(top<0)
	{
		cout<<"Stack underflow.......";
		return -1;
	}
      int x=stack[top];
	   top=top-1;
	   cout<<endl<<x<<endl;
}
main()
{int a;
	cout<<"Enter element to push-";
	for(int i=0;i<5;i++)
	{
	    push();
	}
	for(int i=0;i<5;i++)
	{
		pop();
	}
}
