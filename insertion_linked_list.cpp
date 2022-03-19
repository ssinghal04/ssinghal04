#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *head = NULL;
struct node* insert_at_first(node *head)
{
	node *p = new node();
	p->data = 1;
	p->next = head;
	return p;
}
struct node* insert_at_end(node *head)
{
	node *p = new node();
	p->data = 1222222;
	node *q=head;
	while(q->next != NULL)
	{
		 q = q->next;
	}
	q->next = p;
	p->next = NULL;
	return head;
}
struct node* insert_after_given_node(node *head,node *prev)
{
	node *p = new node();
	p->data  = 12345;
	p->next = prev->next;
	prev->next = p;
	return head;	
}
struct node* insert_at_index(node *head,int index)
{
	node *p = new node;
	node *q = head;
	int i=0;
	while(i!=(index-1))
	{
		q = q->next;
		i++;
	}
	p->data = 123456;
	p->next = q->next;
	q->next = p;
	return head;
}
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
	cout<<"without any insertion operation : "<<endl;
	traversal(head);
	head = insert_at_first(head);
	cout<<"linked list after insert operation at beginning : "<<endl;
	traversal(head);
	head = insert_at_end(head);
	cout<<"linked list after insert operation at end : "<<endl;
	traversal(head);
	head = insert_after_given_node(head,third);
	cout<<"linked list after insert operation after given node : "<<endl;
	traversal(head);
	head = insert_at_index(head,2);
	cout<<"linked list after insert operation at given index : "<<endl;
	traversal(head);
	return 0;
}
	
