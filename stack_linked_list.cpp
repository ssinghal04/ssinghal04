#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *top = NULL;
int isempty(node *top)
{
	if(top==NULL)
	return 1;
	else
	return 0;
}
int isfull(node *top)
{
	node *p = new node();
	if(p==NULL)
	return 1;
	else
	return 0;
}
node* push(node *top,int x)
{
	if(isfull(top))
	cout<<"stack overflow : "<<endl;
	else
	{
		node *p  = new node();
		p->data = x;
		p->next = top;
		top = p;
		return top;
	}
}
int pop(node *top)
{
	if(isempty(top))
	cout<<"stack underflow : "<<endl;
	else
	{
		int x;
		node *p = top;
		top = top->next;
	   x= p->data;
		delete(p);
		return x;
	}
}
int stacktop()
{
	return top->data;
}
void traversal()
{
	node *p = top;
	while(p!=NULL)
	{
		cout<<"element in stack is : "<<p->data<<endl;
		p = p->next;
	}
}
int main()
{
	top = push(top,34);
	top = push(top,45);
	top = push(top,56);
	traversal();
	cout<<pop(top)<<endl;
	cout<<pop(top);
	return 0;
	
}
