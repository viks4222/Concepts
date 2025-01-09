/********************************************************************************************
 * https://www.learn-c.org/en/Linked_lists
 * The best use cases for linked lists are stacks and queues
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node_t;

void printLinkedList(node_t *node) {
    while (node != NULL) {
        printf("Value:  %d\n", node->data);
        node = node->next;
    }
}

void AddItemToEnd(node_t *head, int val) {
    node_t *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->data = val;
    current->next->next = NULL;
}

int RemoveLastItem(node_t *head) {
    int retval = 0;
    if (head->next == NULL) {
        retval = head->data;
        free(head);
        return retval;
    }
    node_t *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    retval = current->next->data;
    free(current->next);
    current->next = NULL;
    return retval;
}

/*Since we use a function to do this operation, we want to be able to modify the head variable. 
To do this, we must pass a pointer to the pointer variable (a double pointer) so we will be able 
to modify the pointer itself. */
void AddItemAtStart(node_t **head, int val) {
    node_t *node = (node_t *)malloc(sizeof(node_t));
    node->data = val;
    node->next = *head;
    *head = node;
}

int RemoveFirstItem(node_t **head)
{
  int retval = 0;
  
  if(*head == NULL)
  {
      return -1;
  }
  
  node_t *new_head = (*head)->next;
  retval = (*head)->data;
  free(*head);
  *head = new_head;
  
  return retval;
}

int RemoveItemAtIndex(node_t *head, int n)
{
    int retval = 0;
    node_t *current = head;
    node_t *temp_node = NULL;

    if(n == 0)
    {
      return RemoveFirstItem(&head);
    }
    
    for(int i=0; i<n-1; i++)
    {
        if(current->next == NULL)
        {
          return -1;           
        }
        current = current->next;
    }
    
    if(current->next == NULL)
    {
        return -1;
    }
    
    temp_node = current->next;
    retval = temp_node->data;
    current->next = temp_node->next;
    free(temp_node);
    
    return retval;
}

int main() {
    // Create LL with nodes 1,2,3
    node_t *head = (node_t *)malloc(sizeof(node_t));
    head->data = 1;
    head->next = (node_t *)malloc(sizeof(node_t));
    head->next->data = 2;
    head->next->next = (node_t *)malloc(sizeof(node_t));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    printLinkedList(head);
    
    // Add an element to end and print the LL
    AddItemToEnd(head, 4);
    printLinkedList(head);
    
    //Delete the last element from LL
    printf("popped value:  %d\n", RemoveLastItem(head));
    printLinkedList(head);
    
    //Add an element to the start of LL
    AddItemAtStart(&head, 0);
    printLinkedList(head);

    RemoveItemAtIndex(head, 1);
    printLinkedList(head);
    return 0;
}