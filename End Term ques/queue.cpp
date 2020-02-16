#include<iostream>
using namespace std;
int queue[10];
int front=-1;
int rear=-1;
void enqueue(){
	if(front==0 && rear==100 || front==rear+1){
		cout<<"Queue is full\n";
		return;
	}
	int d;
	cin>>d;
	if (front==-1 && rear==-1){
		front=0;
		rear=0;		
	}
	else if(rear==9){
		rear=1;
	}
	else{
		++rear;
	}
	queue[rear]=d;
}

int dequeue(){
	if(front==-1){
		cout<<"\npure underflow";
		return -1;
	}
	int x=queue[front];
	if(front==rear){
		front=rear=-1;
	}
	else if(front=9){
		front=1;
	}
	else{
		front=front+1;
	}
	return x;
}

main()
{  
 for(int i=0;i<5;i++)
 {
	enqueue();
}

	int x=dequeue();
	cout<<"\n"<<x;
}
