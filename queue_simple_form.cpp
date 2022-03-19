#include<iostream>
using namespace std;
int size = 10;
int front = -1;
int rear = -1;
int a[10];
void enqueue()
{
	if(front == size-1)
	cout<<"queue overflow :"<<endl;
	else
	{
		int x;
		cout<<"enter x ";
		cin>>x;
		front++;
		a[front] = x;
	}
}
void dequeue()
{
	if(rear == front)
	cout<<"queue underflow : "<<endl;
	else
	{
		int x;
		rear++;
		x = a[rear];
		cout<<"deleted element from queue is : "<<x<<endl;
	}
}
void display()
{
	for(int i=0;i<(front+1);i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();	
	display();
	dequeue();
   dequeue();
   return 0;
}
