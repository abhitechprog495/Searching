#include<stdio.h>
#include<conio.h>
void main()
{
 int low,high,mid,i,n,x,list[20];
 clrscr();
 printf("Enter The Number Of Elements : ");
 scanf("%d",&n);
 printf("Enter The Elements : ");
 for (i=0;i<n;i++)
 {
  scanf("%d",&list[i]);
 }
 printf("Enter The Element To Search : ");
 scanf("%d",&x);
 low=0;
 high=n-1;
 mid=(low+high)/2;
 while (low<=high)
 {
  if (list[mid]<x)
  {
   low=mid+1;
  }
  else if (list[mid]==x)
  {
   printf("%d Element Is Found At Position %d",x,mid+1);
   break;
  }
  else
  {
   high=mid-1;
   mid=(low+high)/2;
  }
 }
 if (low>high)
 {
  printf("Not Found! %d Element Is Not Present In The List!",x);
 }
 getch();
}