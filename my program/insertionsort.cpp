#include<iostream>
using namespace std;
main()
{
  int i,j,a[50],n,temp;
  cout<<"Enter the size of an array-";
  cin>>n;
  cout<<"Enter an array element-";
  for(i=0;i<n;i++)	
  {
  	cin>>a[i];
  }
  	for(i=1;i<n;i++)
  	{
	
	temp=a[i];
  	int ptr=i-1;
	  while(temp<a[ptr] && ptr>=0)
	  {
	  	a[ptr+1]=a[ptr];
	  	ptr=ptr-1;
	  }
	  a[ptr+1]=temp;
}
  cout<<"Sorted array are-";
  for(i=0;i<n;i++)
  {
  cout<<a[i]<<endl;
  }
}
