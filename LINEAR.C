#include<stdio.h>
#include<conio.h>
void main()
{
  int list[10],i,n,x;
  clrscr();
  printf(“Enter The Number Of Elements : “);
  scanf(“%d”,&n);
  printf(“Enter The Elements : “);
  for (i=0;i<n;i++)
  {
   scanf(“%d”,&list[i]);
  }
 printf(“Enter The Element To Search : “);
scanf(“%d”,&x);
for (i=0;i<n;i++)
{
 if (list[i]==x)
 {
  printf(“%d Is Found At Location %d”,x,i+1);
  break;
 }
}
 if (i==n)
 {
  printf(“%d Is Not Present In The List”,x);
 }
 getch();
}
