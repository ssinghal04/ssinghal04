#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *head = NULL;
void traversal(node *head)
{
	node *p = head;
	do
	{
		cout<<"element is :: "<<p->data<<endl;
		p = p->next;
	}while(p!=head);
}
struct node* insert_at_first(node *head)
{
	node *p = new node();
	p->data = 1;
	node *q = head;
   while(q->next!=head)
   {
   	q = q->next;
	}
	q->next = p;
	p->next = head;
	head = p;
	return head;
}
int main()
{
	node *head = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	head->data = 12;
	head->next = second;
	second ->data = 122;
	second->next = third;
	third ->data = 1222;
	third->next = fourth;
	fourth ->data = 12222;
	fourth->next = head;
	cout<<"element in circular linked list is : "<<endl;
	traversal(head);
	cout<<"element in linked list after inserting node at first"<<endl;
	head = insert_at_first(head);
	traversal(head);
	return 0;
}
