#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
void push(struct Node** headref, int newdata)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data  = newdata;
    newnode->next = (*headref);
    (*headref)    = newnode;
}
void insertAfter(struct Node* prevnode, int newdata)
{
    if (prevnode == NULL)
    {
      printf("Previous node not to be NULL");
      return;
    }
    struct Node* newnode =(struct Node*) malloc(sizeof(struct Node));
    newnode->data  = newdata;
    newnode->next = prevnode->next;
    prevnode->next = newnode;
}
void append(struct Node** headref, int newdata)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *headref;
    newnode->data  = newdata;
    newnode->next = NULL;
    if (*headref == NULL)
    {
       *headref = newnode;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newnode;
    return;
}
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
int main()
{
  struct Node* head = NULL;
  append(&head, 'S');
  push(&head, 'M');
  push(&head, 'I');
  append(&head, 'T');
  insertAfter(head->next, 'U');
  printf("Created Linked list is: ");
  printList(head);
 
  return 0;
}

