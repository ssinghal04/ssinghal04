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
	if(s->top == s->size-1)
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
		s->top++;
		s->a[s->top] = x;
		cout<<x<<endl;
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
		cout<<"poped element from stack is : "<<x<<endl;
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
	cout<<"stack has been created successfully : "<<endl;
   //cout<<"Before pushing, Full "<<isfull(s)<<endl;
   //cout<<"Before pushing, Empty "<< isempty(s);
   push(s, 1);
   push(s, 23);
   push(s, 99);
   push(s, 75);
   push(s, 3);
   push(s, 64);
   push(s, 57);
   push(s, 46);
   push(s, 89);
   push(s, 6); // ---> Pushed 10 values 
   //push(s, 46);
   cout<<"topmost element in stack is : "<<stacktop(s)<<endl;
   cout<<"bottommost element in stack is : "<<stackbottom(s)<<endl;
   pop(s);
   pop(s);
   pop(s);
	return 0;
}
