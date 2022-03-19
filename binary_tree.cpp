#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
};
node* createnode(int data)
{
	node *p = new node();
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void preorder(node *root)
{
	if(root!=NULL)
	{
		 cout<<root->data;
		 preorder(root->left);
		 preorder(root->right);
	}
	//cout<<endl;
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		 preorder(root->left);
		 cout<<root->data;
		 preorder(root->right);
	}
	//cout<<endl;
}
void postorder(node *root)
{
	
	if(root!=NULL)
	{
		 preorder(root->left);
		 preorder(root->right);
		 cout<<root->data;
	}
	cout<<endl;
}
int main()
{
	node *p = createnode(3);
	node *p1 = createnode(2);
	node *p2 = createnode(4);
	p->left = p1;
	p->right = p2;
	cout<<"preorder traversal : ";
	preorder(p);
	cout<<"inorder traversal : "<<endl;
	inorder(p);
	cout<<"post order traversal : "<<endl;
	postorder(p);
	return 0;
}
