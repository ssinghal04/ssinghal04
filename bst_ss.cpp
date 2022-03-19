#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
};
node *root = NULL;
node *createnode(int data)
{
	node *p = new node();
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<"element in bst is : "<<root->data<<endl;
		inorder(root->right);
	}
}
node *search(node *root,int data)
{
	if(root == NULL)
	return NULL;
	else if(data == root->data)
	return root;
	else if(data < root->data )
	return search(root->left,data);
	else
	return search(root->right,data);
}
node *search_iterative(node *root,int data)
{
	while(root!=NULL)
	{
		if(root->data == data)
		return root;
		else if(data < root->data)
		root = root->left;
		else
		root = root->right;
	}
	return NULL;
}
int main()
{
	node *p = createnode(5);
	node *p1 = createnode(3);
	node *p2 = createnode(6);
	node *p3 = createnode(1);
	node *p4 = createnode(4);
	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
	inorder(p);
	node *n = search(p,4);
	if(n!=NULL)
	cout<<"element is found in bst :"<<n->data<<endl;
	else
	cout<<"element not found"<<endl;
	node *n1 = search_iterative(p,10);
	if(n1!=NULL)
	cout<<"element is found in bst :"<<n1->data;
	else
	cout<<"element not found"<<endl;
	return 0;
}
