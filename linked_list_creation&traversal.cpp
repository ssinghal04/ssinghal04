#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *head = NULL;
void traversal(node *p)
{
	while(p!=NULL)
	{
		cout<<"element : "<<p->data<<endl;
		p = p->next;
	}
}
int main()
{
	node *head = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	head ->data = 12;
	head->next = second;
	second ->data = 122;
	second->next = third;
	third ->data = 1222;
	third->next = fourth;
	fourth ->data = 12222;
	fourth->next = NULL;
	traversal(head);
	return 0;
}
	
