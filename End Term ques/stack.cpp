#include<iostream>
using namespace std;
int stack[10];
int top=-1;
void push()
{
	
	int d;
	cin>>d;
	top=top+1;
	stack[top]=d;
	cout<<"element pushed"<<endl;
} 
int pop()
{
	if(top<0)
	{
		cout<<"Stack underflow";;
		return -1;
	}
	int x=stack[top];
	top=top-1;
	return x;
}

main()
{ int x; 
cout<<"Enter element to push ";
 for(int i=0;i<5;i++)
{    
     push();
   // cout<<endl<<"Element pushed is-"<<c<<endl;
} 
  for(int i=0;i<5;i++)
  {
  
  x=pop();
  cout<<endl<<"Element popped is "<<x;
}
  
}
