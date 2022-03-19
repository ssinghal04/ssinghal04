#include<iostream>
using namespace std;
int linear_search(int a[],int size,int num)
{
	for(int i=0;i<size;i++)
	{
		if(a[i] == num)
		return i;
	}
	return -1;
}
int main()
{
	int capacity = 100;
	int size = 5,a[size],num;
	cout<<"enter element of array : ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter number to be searched : ";
	cin>>num;
	linear_search(a,size,num);
	int search_index = linear_search(a,size,num);
	cout<<"element "<<num << " is found at "<<search_index<<endl;
	return 0;
}
