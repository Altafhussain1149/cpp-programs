#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define max = 100
struct queue
{
    int info;
    struct queue *next;

} *start=NULL;
bool is_empty()
{
    if(start==NULL)
    return 1;
    else
    return 0; 
}
void insert_beg()
{
    int num;
    struct queue *p,*temp;

    if(is_empty())
    {
     p=(struct queue *)malloc(sizeof(struct queue));
     start=p;
     printf("Enter the value you want to store: ");
     scanf("%d",&num);
     start->info=num;
     start->next=NULL;

    }
    else
    {
        printf("Enter the value you want to store: ");
        scanf("%d",&num);
        p=(struct queue *)malloc(sizeof(struct queue));
        temp=start;
        start=p;
        p->info=num;
        p->next=temp;
        
    }

}
void display()
{

    struct queue *temp;
    if(start==NULL)
    printf("\nEmpty list\n");
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            printf("\n%d\n",temp->info);
            temp=temp->next;
        }
        printf("%d",temp->info);
    }
}
void insert_pos()
{
    struct queue *temp,*p;
    int pos,i,num;
    temp=start;
    printf("\nEnter the position at which you would like to insert\n");
    scanf("%d",&pos);
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    p=(struct queue *)malloc(sizeof(struct queue));
    printf("Enter the value you would like to insert:\n");
    scanf("%d",&num);
    p->info=num;
    p->next=temp->next;
    temp->next=p;
}
void insert_end()
{
    struct queue *temp=start,*p;
    int num;
    if(is_empty)
    insert_beg();
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        p=(struct queue *)malloc(sizeof(struct queue));
        printf("\nEnter the value you would like to insert at end\n");
        scanf("%d",&num);
        temp->next=p;
        p->next=NULL;
        p->info=num;
    }

    
}
int main()
{
    // struct queue *p;
    int num;
    char ch;
    do{
        printf("What do you want to perform:\n1.Insertion in the beginning\n2.Insertion at specific position\n3.Insertion at end\n4.Deletion from beginning\n5.Deletion from specific position\n6.Deletion from end");
        scanf("%d",&num);
        switch(num)
        {
            case 1: insert_beg();
            break;
            case 2: insert_pos();
            break;
            case 3: insert_end();
            break;
            // case 4: del_beg();
            // break;
            // case 5: del_pos();
            // break;

            // case 6: del_end();
            // break;
            case 7: display();
            break;
        }
        printf("\nDo you want to repeat:\nEnter (y/n)");
        scanf("%c",&ch);
    }while(ch!='n');
    // p = (struct queue *)malloc(sizeof(struct queue));
    // printf("Enter value for first element in queue: ");
    // scanf("%d", &num);
    // p->info = num;
    // // printf();
    return 0;
}
