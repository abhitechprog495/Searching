#include<stdio.h>
#include<conio.h>
void main()
{
  Int list[10],I,n,x;
  Clrscr();
  Printf(“Enter The Number Of Elements : “);
  Scanf(“%d”,&n);
  Printf(“Enter The Elements : “);
  For (i=0;i<n;i++)
  {
   Scanf(“%d”,&list[i]);
  }
 Printf(“Enter The Element To Search : “);
Scanf(“%d”,&x);
For (i=0;i<n;i++)
{
 If (list[i]==x)
 {
  Printf(“%d Is Found At Location %d”,x,i+1);
  Break;
 }
}
 If (i==n)
 {
  printf(“%d Is Not Present In The List”,x);
 }
 getch();
}
