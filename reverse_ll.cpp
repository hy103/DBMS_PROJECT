#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	struct node *next;
};

struct node* reverse(struct node **head_ref)
{
	
	struct node* prev = NULL;
	struct node* current = *head_ref;
	struct node* next;
	
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
	return *head_ref;
}
void push(struct node **head_ref, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
	
}

 void printlist(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	
}
int main()
{
	struct node *head = NULL;
	push(&head,20);
		push(&head,10);
			push(&head,30);
				push(&head,40);
	printlist(head);
	cout<<"This is reversed linked list\n";
	reverse(&head);
		printlist(head);
	return 0;
}
