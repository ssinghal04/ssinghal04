#include<iostream>
using namespace std;
void deletion(int a[],int size,int index)
{
	for(int i=index;i<size;i++)
	{
		a[i] = a[i+1];
	}
}
void traversal(int a[],int size)
{
	cout<<"array element is : "<<endl;
	for(int i=0;i<(size-1);i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int capacity = 100;
	int size = 5,index,a[size];
	cout<<"print element of array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter index in which u want to delete number ";
	cin>>index;
	deletion(a,size,index);
	traversal(a,size);
	return 0;
}
