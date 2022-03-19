#include<iostream>
// avav
using namespace std;
int binary_search(int a[],int size,int num)
{
	int lb=0,ub = (size-1);
	while(lb<ub) 
	{
	    int mid = (lb+ub)/2;
	    if(a[mid]==num)
	    return mid;
	    else if(a[mid]<num)
	    lb = mid+1;
	    else
	    ub = mid-1;
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
	binary_search(a,size,num);
	int search_index = binary_search(a,size,num);
	cout<<"element "<<num << " is found at "<<search_index<<endl;
	return 0;
}
