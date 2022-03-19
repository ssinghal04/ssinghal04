#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
void traversal(node *p)
{
	while(p!=NULL)
	{
		cout<<"element : "<<p->data<<endl;
		p = p->next;
	}
}
struct node* delete_first_node(node* head)
{
	node* p = head;
	head = head->next;
   delete (p);
   return head;
}
int main()
{
	node *head = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = fourth;
	fourth->data = 4;
	fourth->next = NULL;
	traversal(head);
	head = delete_first_node(head);
	cout<<"linked list after deleting at beginning : "<<endl;
	traversal(head);
	return 0;
}
