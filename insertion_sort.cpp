#include<iostream>
using namespace std;
void print(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}
void insertion_sort(int a[],int size)
{
	int i,j,key;
	for(i=1;i<size;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
int main()
{
	int size= 10,a[size];
	cout<<"enter array element ;"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	insertion_sort(a,size);
	cout<<"array after inserting sorting : "<<endl;
	print(a,size);
}
