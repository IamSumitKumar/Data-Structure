#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* lp;
    struct node* rp;
};
int maxDepth(struct node* node) 
{
   if (node==NULL) 
       return 0;
   else
   {
       int ld = maxDepth(node->lp);
       int rd = maxDepth(node->rp);
       if (ld > rd) 
           return(ld+1);
       else return(rd+1);
   }
} 
struct node* newNode(int data) 
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->lp = NULL;
    node->rp = NULL;
   
    return(node);
}
   
int main()
{
    struct node *root = newNode(1);
 
    root->lp = newNode(2);
    root->rp = newNode(3);
    root->lp->lp = newNode(4);
    root->lp->rp = newNode(5); 
    printf("Hight of tree is %d", maxDepth(root));
    getchar();
    return 0;
}
