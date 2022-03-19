#include<iostream>
using namespace std;
void insertionsort(int a[],int size)
{
	int i,j,key;
	for(i=1;i<size;i++)
	{
		j = i-1;
		key = a[j];
		while(a[j]>a[j+1] && j>=0)
		{
			a[j] = a[j+1];
			j--;
		}
		a[j+1]  = key;
	}
}
void display(int a[],int size)
{
	cout<<"array element :: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int size= 10,a[10];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	insertionsort(a,size);
	display(a,size);
	return 0;
}
