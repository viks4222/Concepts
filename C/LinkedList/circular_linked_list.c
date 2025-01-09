/********************************************************************************************
 *circular linked list
********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node_t;

void PrintLinkedList(node_t *head)
{
    node_t *current = head;
    do
    {
        printf("node value: %d\n", current->data);
        current = current->next;
    }while(current != head);
}

void InsertAtTheStart(node_t **head, int val)
{
    node_t * new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = val;
    node_t *current = *head;
    while(current->next != *head)
    {
        current = current->next;
    }
    current->next = new_node;
    new_node->next = *head;
    *head = new_node;
}

void InsertAtTheEnd(node_t *head, int val)
{
    node_t *current = head;
    
    while(current->next != head)
    {
        current = current->next;
    }
    
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->data = val;
    current->next->next = head;
}

int InsertAtTheIndex(node_t *head, int n, int val)
{
    node_t *current = head;
    
    for(int i=0; i<n-1; i++)
    {
        if(current->next == head)
        {
            return -1;
        }
        current = current->next;
    }
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->data = val;
    new_node->next = current->next;
    current->next = new_node;
    return 0;
}

int DeleteAtStart(node_t **head)
{
    int retval = 0;
    
    if(*head == NULL)
    {
      return -1;
    }
    node_t *current = *head;
    while(current->next != *head)
    {
        current = current->next;
    }
    
    node_t *new_head = (*head)->next;
    retval = (*head)->data;
    free(*head);
    current->next = new_head;
    *head = new_head;
    return retval;
}

int main()
{
	node_t *head = (node_t*)malloc(sizeof(node_t));
    head->data = 1;

    head->next = (node_t*)malloc(sizeof(node_t));
    head->next->data = 2;

    head->next->next = (node_t*)malloc(sizeof(node_t));
    head->next->next->data = 3;
    head->next->next->next = head;
    printf("********Print List********");    
    PrintLinkedList(head);
    
    printf("********Print List********");
    InsertAtTheStart(&head, 0);
    PrintLinkedList(head);   

    printf("********Print List********");
    InsertAtTheEnd(head, 4);
    PrintLinkedList(head); 

    printf("********Print List********");
    InsertAtTheIndex(head, 2, 10);
    PrintLinkedList(head); 
    
    printf("********Print List********");  
    DeleteAtStart(&head);
    PrintLinkedList(head);     
	return 0;
}