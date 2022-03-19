#include<iostream>
using namespace std;
int size = 10;
int top = -1;
int a[10];
void push()
{
	if(top == size-1)
	cout<<" stack overflow "<<endl;
	else
	{
		int x;
		cout<<"enter element which u want to push into stack : "<<endl;
		cin>>x;
		top++;
		a[top]  = x;
	}
}
void pop()
{
	if(top == -1)
   cout<<"stack underflow : "<<endl;
   else
   {
   	int x;
   	x = a[top];
   	top--;
   	cout<<"poped element is :: "<<x<<endl;
	}
}
void traversal_stack()
{
	cout<<"stack element are :: "<<endl;
	for(int i=0;i<=top;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	
//	cout<<"enter array element :" <<endl;
//	for(int i=0;i<10;i++)
//	{
//		cin>>a[i]>>endl;
//	}
   push();
   push();
   push();
	push();
   push();
   push();
   push();
   traversal_stack();
   pop();
   pop();
   traversal_stack();
   push();
   return 0;
}
