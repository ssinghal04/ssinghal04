#include<iostream>
using namespace std;
struct queue
{
	int f;
	int r;
	int size;
	int *a;
};
int isempty(queue *q)
{
	if(q->r == q->f)
	return 1;
	else
	return 0;
}
int isfull(queue *q)
{
	if(q->f = q->size-1)
	return 1;
	else
	return 0;
}
void enqueue(queue *q,int x)
{
	if(isfull(q))
	cout<<"queue overflow : "<<endl;
	else
	{
		q->f++;
		q->a[q->f] = x;
		cout<<"queueue's element "<<x <<endl;
	}
}
void dequeue(queue *q)
{
	if(isempty(q))
	cout<<"queue underflow : "<<endl;
	else
	{
		int x;
		q->r++;
		x = q->a[q->r];
		cout<<"deleted element in queue : "<<x <<endl;
	}
}
int queueuetop(queue *q)
{
	return q->f;
}
int main()
{
	queue *q;
	q = new queue();	
	q->f = -1;
	//cout<<"hello\n";
	q->r = -1;
	q->size = 5;
	q->a = new int[10];
	
	enqueue(q,12);
	enqueue(q,12);
	enqueue(q,12);
	enqueue(q,12);
	return 0;
}
