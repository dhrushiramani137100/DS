#include<stdio.h>
#include<string.h>
#define MAX 100

char stack [MAX],str[MAX];
int top=-1;
void push()
  {
      char ch;
      scanf(" %c",&ch);
      stack[++top]=ch;
  }
void pop()
{
    printf("%s",str);
}
void main()
{

    int i,n;
    printf("enter the character:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        push();
    }
     for(i=0;i<n;i++)
    {
        str[i]=stack[top--];
    }
    str[n]='\0';
    pop();
}
