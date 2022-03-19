#include<iostream>
using namespace std;
struct queue
{
	int size;
	int f;
	int r;
	int *a;
};
int isempty(queue *q)
{
	if(q->r==q->f)
	return 1;
	else
	return 0;
}
int isfull(queue *q)
{
	if(q->r==(q->size)-1)
	return 1;
	else
	return 0;
}
void enqueue(queue *q,int data)
{
	if(isfull(q))
	cout<<"queue overflow :"<<endl;
	else
	{
		q->r++;
		q->a[q->r] = data;
		cout<<"encoded value in queue : "<<data<<endl;
	}
}
int dequeue(queue *q)
{
	int x =- 1;
	if(isempty(q))
	cout<<"queue underflow : "<<endl;
	else
	{
		q->f++;
		x = q->a[q->f];
	}
	return x;
}
int main()
{
	queue *q;
	q = new queue();
	q->size = 10;
	q->f = -1;
	q->r = -1;
	q->a = new int[10];
	enqueue(q,23);
	enqueue(q,34);
	enqueue(q,45);
	cout<<"deleted element in queue : "<<dequeue(q)<<endl;
	cout<<"deleted element in queue : "<<dequeue(q)<<endl;
	cout<<"deleted element in queue : "<<dequeue(q)<<endl;
	enqueue(q,56);
	if(isempty(q))
	cout<<"queue is empty"<<endl;
	return 0;
	
}
