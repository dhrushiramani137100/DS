#include<stdio.h>
#define MAX 30

int stack[MAX],top=-1;
void push(int value);
int pop();

void main()
{
    int n,i,fact=1;
    printf("\n  Enter  value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
        fact=fact*pop();
    }
    printf("\n factorial is : %d",fact);
}
void push(int value)
{

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
int pop()
{
    int val;
    if(top==-1)
    {
        printf("stack is underflow");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}


