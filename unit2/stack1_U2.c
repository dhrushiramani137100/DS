#include<stdio.h>
#define MAX 3

int stack[MAX],top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;
    do
    {
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.peek");
        printf("\n 4.update");
        printf("\n 5.display");
        printf("\n 6.exit");
        printf("\n enter your choice:");
        scanf("%d",&op);

    switch(op)
        {
        case 1:
                push();
                break;
        case 2:
                pop();
                break;
        case 3:
                peek();
                break;
        case 4:
                update();
                break;
        case 5:
                display();
                break;
        }

   }while(op!=6);
}
void push()
{
    int value;
    printf("\n Enter the value to be inserted:");
    scanf("%d",&value);

    if(top==MAX-1)
    {
        printf("stack is overflow");
    }
    else
    {
        top++;
        stack[top]=value;
    }

}
void pop()
{
    int val;
    if(top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        val=stack[top];
         printf("\n value is deleted is:%d",val);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\n stcak is Empty");
    }
    else
    {
        printf("\n Topmost value is:%d",stack[top]);
    }
}
void update()
{
    int i,x;
    printf("\n enter index to be updated:");
    scanf("%d",&i);

    printf("\n enter index to be updated:");
    scanf("%d",&x);

    if(top-i+1<=-1)
    {
        printf("\n invalid index");
    }
    else
    {
        stack[top-i+1]=x;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
