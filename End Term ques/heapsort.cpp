#include<iostream>
using namespace std;
int heap[50];
int n=-1;
void insheap(int item)
{
	n=n+1;
	int ptr=n;
	int par;
	while(ptr>0)
	{
		par=(ptr-1)/2;
		if(item<heap[par]){
		heap[ptr]=item;
		return;
		}
		heap[ptr]=heap[par];
		ptr=par;
	}
	heap[0]=item;
}

void display(int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<heap[i];
	}
}

int delheap()
{
	int item=heap[0];
	int last=heap[n];
	n=n-1;
	int ptr=0,left=1,right=2;
	while(right<=n)
	{
		if(last>=heap[left] && last>=heap[right])
		{
			heap[ptr]=last;
			return item;
		}
		else if(heap[left]>=heap[right])
		{
			heap[ptr]=heap[left];
			ptr=left;
		}
		else
		{
			heap[ptr]=heap[right];
			ptr=right;
		}
		left=(ptr*2)+1;
		right=left+1;
	}
	if((left==n) && last<heap[left])
	{
		heap[ptr]=heap[left];
		ptr=left;
	}
	heap[ptr]=last;
	return item;
}

void heapsort()
{
	int N,temp;
	cout<<"\nEnter the number of values ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		insheap(temp);
	}
	cout<<"\nMax heap consltructed\n";
	display(N);
	while(n>0)
	{
		int t=delheap();
        cout<<"\n deleted"<<t<<" N= "<<n;
        heap[n+1]=t;
	}
	display(N);
}

main()
{
	heapsort();
}
