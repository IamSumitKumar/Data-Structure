#include<stdio.h>
 
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    //clrscr();
    top=-1;
    printf("Enter the size of STACK[MAX=100]: ");
    scanf("%d",&n);
    printf("\n\tSTACK OPERATIONS USING ARRAY");
    printf("\n\t 1.PUSH \t2.POP \t3.DISPLAY \t4.EXIT");
    do
    {
        printf("\n\tEnter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\tEXIT POINT ");
                break;
            }
            default:
            {
                printf ("\tPlease Enter a Valid Choice(1/2/3/4)\n");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\t\tSTACK is over flow");
         
    }
    else
    {
        printf("\t\tEnter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\t\tStack is under flow");
    }
    else
    {
        printf("\t\tThe popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\t\tThe elements in STACK");
        for(i=top; i>=0; i--)
            printf("\n\t\t%d",stack[i]);
        printf("\t\tPress Next Choice ");
    }
    else
    {
        printf("\t\tThe STACK is empty");
    }
    
}
