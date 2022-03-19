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
	while(p!=NULL)
	{
		cout<<"element is : "<<p->data<<endl;
		p = p->next;
	}
}
struct node* delete_at_first(node *head)
{
	node *p = head;
	head = head->next;
	delete(p);
	return head;
}
struct node* delete_at_end(node *head)
{
	node *p = head;
	node *q = p->next;
	while(q->next!=NULL)
	{
		p =p->next;
		q = q->next;
	}
	p->next = NULL;
	delete(q);
	return head;
}
struct node* delete_at_given_index(node *head,int index)
{
	node *p = head;
	int i = 0;
	while(i!=(index-1))
	{
		p =p->next;
		i++;
	}
	node *q = p->next;
	p->next = q->next;
	delete(p);
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
	fourth->next = NULL;
	cout<<"element in linked list is : "<<endl;
	traversal(head);
	cout<<"linked list after deleting first node : "<<endl;
	head = delete_at_first(head);
	traversal(head);
	cout<<"linked list after deleting last node : "<<endl;
	head = delete_at_end(head);
	traversal(head);
	cout<<"linked list after deleting  node at given index: "<<endl;
	head = delete_at_given_index(head,1);
	traversal(head);
	return 0;		
}
