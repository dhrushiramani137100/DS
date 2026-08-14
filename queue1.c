#include<stdio.h>
#define MAX 5

int front=-1,rear=-1;
int queue[MAX];
void insert();
void delete_elements();
void display();
void main()
{
    int op;
    do
    {
     printf("\n 1.Insert");
     printf("\n 2.Delete");
     printf("\n 3.Display");
     printf("\n 4.Exit");

     printf("\n Enter your choice:");
     scanf("%d",&op);

        switch(op)
        {
            case 1:
                insert();
                break;

            case 2:
                delete_elements();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\n Exit... ");
                break;

            default:
                printf("\n Invalid Choice");
                break;
        }
    }while(op!=4);
}

void insert()
{
    int val;
    printf("\n Enter a value:");
    scanf("%d",&val);

    if(rear==MAX-1)
    {
        printf("\n Queue is overflow...");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=val;
}

void delete_elements()
{
    int val;
    printf("\n Enter a value:");
    scanf("%d",&val);

    if(front==-1 || front>rear)
    {
        printf("\n Queue is empty...");
    }
    else
    {
        val=queue[front];
        printf("\n Deleted element is %d",val);
        if(front==rear)
        {
            front=rear=-1;
            return;
        }
        front++;
    }
}

void display()
{
    int i;
    if(front==-1 || front>rear)
    {
        printf("\n Queue is empty...");
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("\t %d",queue[i]);
    }
}
