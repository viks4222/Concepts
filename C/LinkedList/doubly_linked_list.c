/********************************************************************************************
 *Doubly linked list
********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node_t;

void ForwardTraversal(node_t *head)
{
    node_t *current = head;
    while(current != NULL)
    {
        printf("node value: %d\n", current->data);
        current = current->next;
    }
}

void ReverseTraversal(node_t *head)
{
    node_t *current = head;
    while(current != NULL)
    {
        printf("node value: %d\n", current->data);
        current = current->prev;
    }
}

int AddItemAtIndex(node_t * head, int n, int val)
{
    node_t *new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = val;
    
    if(head == NULL)
    {
        return -1;
    }
    
    node_t *current = head;
    for(int i=0; i<n-1; i++)
    {
        if(current->next == NULL)
        {
            return -1; 
        }
        current = current->next;
    }
    
    new_node->next = current->next;
    new_node->prev = current;
    current->next->prev = new_node;
    current->next = new_node;

    
    return 0;
}

int RemoveItemAtIndex(node_t  **head, int n)
{
    int retval = 0;
    node_t * temp_node = NULL;
    //node_t *current = head;
    if(n == 0)
    {
        temp_node = (*head)->next;
        temp_node->prev = NULL;
        retval = (*head)->data;
        free(*head);
        *head = temp_node;
    }
    
    node_t *current = *head;
    for(int i=0; i<n-1; i++)
    {
        if(current == NULL)
        {
            return -1;
        }
        current = current->next;
        
    }
    temp_node = current->next;
    retval = temp_node->data;
    current->next = temp_node->next;
    current->next->prev = current;
    free(temp_node);
}

int main()
{
	node_t *head = (node_t*)malloc(sizeof(node_t));
    head->data = 10;

    head->next = (node_t*)malloc(sizeof(node_t));
    head->prev = NULL;
    head->next->data = 20;

    head->next->next = (node_t*)malloc(sizeof(node_t));
    head->next->prev = head; 
    head->next->next->data = 30;
    head->next->next->next = NULL;
    head->next->next->prev = head->next;
    
    printf("********Print List********\n");    
    ForwardTraversal(head);
   
    printf("********Print List********\n");    
    ReverseTraversal(head->next->next);

    printf("********Print List********\n");     
    AddItemAtIndex(head, 2, 50);
    ForwardTraversal(head);
   
    printf("********Print List********\n");    
    ReverseTraversal(head->next->next->next);
    
    RemoveItemAtIndex(&head,2);
    ForwardTraversal(head);
   
    printf("********Print List********\n");    
    ReverseTraversal(head->next->next);
	return 0;
}