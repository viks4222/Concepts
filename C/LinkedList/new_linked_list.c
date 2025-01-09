/********************************************************************************************
 * Linked_lists
 * The best use cases for linked lists are stacks and queues
********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  struct node *next;
  int data;
}node_t;

void PrintList(node_t *head)
{
  node_t *temp = head;
  
  while (temp != NULL)
  {
    printf("%d\t", temp->data);
    temp = temp->next;	  
  }
  printf ("\n");	
}

void AddNodeToEnd(node_t **head, int data)
{
    node_t *temp = *head;
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
    
    if(*head == NULL)
    {
    	*head = new_node;
    	return;	
    }
    
    while (temp->next != NULL)
    {
    	temp = temp->next;
    }
    temp->next = new_node;
}

void RemoveNodeAtEnd(node_t **head)
{
    node_t *temp = *head;
    if(*head == NULL)
    {
		return;
	}

    while(temp->next->next != NULL)
	{
        temp = temp->next;		
	}
	free(temp->next);
	temp->next = NULL;	
}

void AddNodeToBegin(node_t **head, int data)
{
	node_t *temp = *head;
	node_t *new_node = (node_t *)malloc(sizeof(node_t));
	new_node->data = data;
	
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	
	new_node->next = *head;
	*head = new_node;
}

void RemoveNodeAtBegin(node_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	
	node_t *temp = *head;

	*head = temp->next;
	free(temp);
	temp = NULL;	
}

void AddNodeAtPos(node_t **head, int pos, int data)
{
	node_t *temp = *head;
	node_t *new_node = (node_t *)malloc(sizeof(node_t));
	new_node->data = data;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	if (pos == 1)
	{
		new_node->next = *head;
		*head = new_node;		
	}
	else
	{
		while (pos - 2 && temp->next != NULL)
		{
			pos --;
			temp = temp->next;	
		}	
		new_node->next = temp->next;
		temp->next = new_node;			
	}

}

void RemoveNodeAtPos(node_t **head, int pos)
{
	node_t *temp = *head;
	node_t *prev = *head;

	if(*head == NULL)
	{
		return;	
	}

	if (pos == 1)
	{
		*head = temp->next;
		free(temp);
		temp = NULL;	
	}
	else
	{
		while(pos - 1)
		{
		    pos --;
			prev = temp;
			temp = temp->next;			
		}
		prev->next = temp->next;
		free(temp);	
	}
}

int main()
{
    node_t *head = NULL;
    
    AddNodeToEnd(&head, 10);
    AddNodeToEnd(&head, 20);
    AddNodeToEnd(&head, 30);
    AddNodeToEnd(&head, 40);
    
    PrintList(head);
    
    RemoveNodeAtEnd(&head);
    PrintList(head);
    
    AddNodeToBegin(&head, 50);
    PrintList(head);
    
    RemoveNodeAtBegin(&head);
    PrintList(head);
    
    AddNodeAtPos(&head, 1, 60);
    PrintList (head);
    
    AddNodeAtPos(&head, 2, 70);
    PrintList(head);
    
    AddNodeAtPos(&head, 8, 80);
    PrintList(head);
    
    RemoveNodeAtPos(&head, 5);
    PrintList(head);
    
    RemoveNodeAtPos(&head, 3);
    PrintList(head);	

    return 0;
}