#include<stdio.h>
#include<malloc.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
	
}node;

node *create()
{
	node *p;
	int x;
	printf("Enter data (-1 for no data):\n");
	scanf("%d",&x);
	if(x== -1)
	return NULL;
      p=(node*)malloc(sizeof(node));
           p->data = x;
		   printf("Enter the data into left child node %d \n",x);   	
	         p->left = create();	    
	       printf("Enter the data into right child node %d \n",x); 	
	         p->right = create();  
	     return p;    
}

void preorder(node *t){
	if(t!=NULL){
	printf("%d",t->data);
	preorder(t->left);
	preorder(t->right);
}
}
int main()
{
	 node *root;
	root = create();
	preorder(root);
	return 0;
}
