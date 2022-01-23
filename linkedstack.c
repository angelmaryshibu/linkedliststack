#include <stdio.h>
#include <stdlib.h>
int push();
int pop();
int display();
struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;
struct node *ptr;
void main()
{ int choice=1;
int n;
    printf(" \t... menu ...  \t");
    printf("\n  1.PUSH \n  2.POP \n  3.DISPLAY \n  4.EXIT \n");
    while(choice=1)
    {
        printf("enter your choice");
        scanf("%d",&n);
        switch(n)
        {case 1:push();
                break;
         case 2:pop();
                break;
         case 3:display();
                break;
         case 4:exit(0);      
        }
    }
}
int push()
{ struct node *new;
 new=(struct node*)malloc(sizeof(struct node));
 if(new=NULL)
 {
     printf("no space available");
     return 0;
 }
 printf("enter the data to be inserted");
 scanf("%d",&new->data);
 if(top==NULL)
 {
        new->link=NULL;
        top=new;
        return 0;
    }
   new->link=top;
   top=new;
        return 0;
}
int pop()
{  if(top=NULL)
   {
       printf("underflow");
       return 0;
   }
   ptr=top;
   top=top->link;
   free(ptr);
        return 0;
}
int display()
{
    if(top=NULL)
    {
        printf("the list is empty");
        return 0;
    }
    while(ptr!=NULL)
    { 
        printf("%d,",ptr->data);
        ptr=ptr->link;
    }
}
    
