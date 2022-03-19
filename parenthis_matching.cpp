#include<iostream>
using namespace std;
struct stack
{
	int size;
	int top;
	char *a;
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
void push(stack *s,char c)
{
	if(isfull(s))
	cout<<"stack overflow : "<<endl;
	else
	{
		s->top ++;
		s->a[s->top] = c;
	}
}
char pop(stack *s)
{
	if(isempty(s))
	cout<<"stack underflow: "<<endl;
	else
	{
		char c;
		c = s->a[s->top];
		s->top--;
		return c;
	}
}
int parenthisis_matching(char *exp)
{
	for(int i=0;exp[i]!='\0',i++)
	{
		if(exp[i]== '(')
		push(s,'(');
		else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp); 
        }
	}
}

