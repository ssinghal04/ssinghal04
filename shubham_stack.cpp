#include<iostream>
using namespace std;
struct stack
{
	int size;
	int top;
	int *a;
};
int isempty(stack *s)
{
	if(s->top == -1)
	return 1;
	else
	return 0;
}
int isfull(stack *s)
{
	if(s->top == (s->size)-1)
	return 1;
	else
	return 0;
}
void push(stack *s,int x)
{
	if(isfull(s))
	cout<<"stack overflow : "<<endl;
	else
	{
		s->top ++;
		s->a[s->top] = x;
		cout<<"element in stack is : "<<x<<endl;
	}
}
void pop(stack *s)
{
	if(isempty(s))
	cout<<"stack underflow : "<<endl;
	else
	{
		int x;
		x = s->a[s->top];
		s->top --;
		cout<<"deleted element in stack is : "<<x<<endl;
	}
}
int stacktop(stack *s)
{
	return s->a[s->top];
}
int stackbottom(stack *s)
{
	return s->a[0];
}
int main()
{
	stack *s = new stack;
	s->size = 10;
	s->top = -1;
	s->a = new int[10];
	cout<<"before pushing , stack is "<<isempty(s)<<endl;
	cout<<"before pushing , stack is "<<isfull(s)<<endl;
	push(s,12);
	push(s,23);
	push(s,34);
	push(s,45);
	push(s,56);
	push(s,67);
	push(s,78);
	pop(s);
	pop(s);
	cout<<"topmost element in stack is : "<<stacktop(s)<<endl;
	cout<<"bottommost element in stack is : "<<stackbottom(s)<<endl;
	return 0;
}

