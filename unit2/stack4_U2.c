#include<stdio.h>
void tower(int n,char source, char helper,char destination)
 {
     if(n==1)
     {
         printf("move disk 1 from %c to %c\n",source,destination);
         return 0;
     }
     tower(n-1,source,destination,helper);

     printf("move disk %d from %c to %c\n",n,source,destination);

     tower(n-1,helper,source,destination);
 }
void main()
{
    int n;

    printf("enter number of disks: ");
    scanf("%d",&n);

    tower(n,'A','B','C');
}
