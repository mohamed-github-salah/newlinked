#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node*next;

};
struct node*start=NULL;
void create ()
{
 struct node*temp,*ptr;
 temp=(struct node*)malloc(sizeof(struct node));
 if(temp==NULL)
 {
     printf("there is  no space in memory");
     exit(0);
 }
 printf("enter data to store it in the node:");
 scanf("%d",&temp->info);
 temp->next=NULL;
 if(start==NULL)
 {
     start=temp;
 }
 else
 {
     ptr=start;
     while(ptr->next!=NULL)
     {
         ptr=ptr->next;
     }
     ptr->next=temp;
 }
 }
 void display()
{
    struct node*ptr;
if(start==NULL)
{
    printf("no element in list\n");
}
else
{
    ptr=start;
    while(ptr!=NULL)
    {
        printf("the element in list is :");
        printf("%d\n",ptr->info);
        ptr=ptr->next;
    }
}



}

void insert_end()
{
    struct node*temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("there is no memory ");
        return;
    }
    printf("enter data ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
     start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;

        }
        ptr->next=temp;
    }


}


void delete_end()
{
      struct node*ptr,*temp;
    if(start==NULL)
    {
        printf("no element to be deleted");
        return;

    }
    else if(start->next==NULL)
    {
        ptr=start;
        start=NULL;
        printf("the deleted element is %d",ptr->info);
        free(ptr);
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;


        }
        temp->next=NULL;


        printf("the deleted element is  %d",ptr->info);
        free(ptr);

    }




}



int main()
{
    while(1)

    {
        int number;
    printf("the menu:\n");
    printf("1:create\n");
     printf("2:display\n");

     printf("3:insert _end\n");


    printf("4:delete_end\n");

     printf("choose number \n");
     //printf("1:create");
     //printf("1:create");
     //printf("1:create");
     //printf("1:create");

    scanf("%d",&number);
    switch(number)
    {
        case 1:create();
        break;
        case 2: display();
        break;

        case 3:insert_end();
        break;


        case 4:delete_end();
        break;

    }

    }
}
