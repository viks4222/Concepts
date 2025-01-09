#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
}node_t;

void print_list(node_t *head)
{
    node_t *temp = head;

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

node_t *reverse_list(node_t *head)
{
    node_t *prev = NULL;
    node_t *curr = head;
    node_t *next ;
    
    while(curr != NULL)
    {
       //Store next
       next = curr->next;
       //Reverse current nodes next
       curr->next = prev;
       
       // Move pointers one position ahead
       prev = curr;
       curr = next;
    }
    
    return prev;
}

int main()
{
    node_t *head = (node_t*)malloc(sizeof(node_t));
    head->data = 1;
    head->next = (node_t*)malloc(sizeof(node_t));
    head->next->data = 2;
    head->next->next = (node_t*)malloc(sizeof(node_t));
    head->next->next->data = 3;
    head->next->next->next = (node_t*)malloc(sizeof(node_t));
    head->next->next->next->data = 4;
    
    print_list(head);
    
    head = reverse_list(head);

    print_list(head);
}