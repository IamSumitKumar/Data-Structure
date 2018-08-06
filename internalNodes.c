#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *lp;
	int data;
	struct node *rp;
};

InternalNodes(struct node *root){
	if(root==NULL)
	return 0;
	else{
		if((root->lp==NULL)&&(root->rp==NULL)){
			return 0;
		}
		else{
			int Xl = InternalNodes(root->lp);
			int Xr = InternalNodes(root->rp);
			return (1+Xl+Xr);
		}
	}
}
struct node* newNode(int data) 
{
  struct node *lp;
  struct node *rp;
  struct node* root = (struct node*)malloc(sizeof(struct node));
  root->data = data;
  root->lp = NULL;
  root->rp = NULL;
   
  return(root);
}

int main()
{
  struct node *root = newNode(1);
  root->lp        = newNode(2);
  root->rp       = newNode(3);
  root->lp->lp  = newNode(4);
  root->lp->rp = newNode(5);    
  printf("Internal Nodes in tree : %d", InternalNodes(root));
  getchar();
  return 0;
}

