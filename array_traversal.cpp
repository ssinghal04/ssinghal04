#include<iostream>
using namespace std;
void traversal(int a[],int size)
{
	cout<<"array element is : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int capacity = 100;
	int size = 5,a[size];
	cout<<"print element of array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	traversal(a,size);
	return 0;
}
