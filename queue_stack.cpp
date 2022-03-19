#include<iostream>
using namespace std;
struct queue
{
	int size;
	int f=-1;
	int r=-1;
	int *a;
};
int isempty(queue *q)
{
	if(q->f == q->r)
	return 1;
	else
	return 0;
}
int isfull(queue *q)
{
	if(q->r == q->size -1)
	return 1;
	else
	return 0;
}
void enqueue(queue *q,int x)
{
	if(isfull(q))
	cout<<"stack overflow : "<<endl;
	else
	{
		q->r++;
	   q->a[q->r] = x;
	   cout<<"entered element in queue : "<<x<<endl;
	}
}
void dequeue(queue *q)
{
	if(isempty(q))
	cout<<"stack underflow : "<<endl;
	else
	{
		int x;
		q->f++;
		x = q->a[q->f];
		cout<<"deleted element in queue : "<<x<<endl;
	}
}
int main()
{
	queue *q;
	q->size = 10;
	q->f = -1;
	q->r = -1;
	q->a = new int[10];
	enqueue(q,12);
	enqueue(q,23);
	enqueue(q,34);
	enqueue(q,45);
	enqueue(q,56);
	return 0;
}
