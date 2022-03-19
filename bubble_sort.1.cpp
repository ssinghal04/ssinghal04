#include<iostream>
using namespace std;
void bubblesort(int a[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
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
void display(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"element in array : "<<a[i]<<endl;
	}
}
int main()
{
	int size = 5;
	int a[5];
	cout<<"enter array element : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	bubblesort(a,size);
	display(a,size);
	return 0;
}
