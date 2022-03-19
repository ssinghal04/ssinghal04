#include<iostream>
using namespace std;
void traversal(int a[],int size)
{
	for(int i = 0;i<(size-1);i++)
	{
		cout<<a[i]<<endl;	
	}
}
void bubble_sort(int a[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int size = 10,a[size];
	cout<<"enter array element : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	//traversal(a,size);
	bubble_sort(a,size);
	cout<<"array element after bubble sort : "<<endl;
	traversal(a,size);
	return 0;
}
