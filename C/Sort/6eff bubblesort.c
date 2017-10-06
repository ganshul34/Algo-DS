#include<stdio.h>
#include<string.h>
main()
{
int n,i,x,d=0,j;
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter array\n");
int a[n],b[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i=0;i<n;i++)
{
  for(j=0;j<(n-1);j++)
  {
  if(a[j]>a[j+1])
  {
  x=a[j];
  a[j]=a[j+1];
  a[j+1]=x;
  }
  }
}
for(i=0;i<n;i++)
{
  if(memcmp(a,b,sizeof(n))==0)
  {
  printf("total passes:- %d\n",d);
  break;
  }
  for(j=0;j<(n-1);j++)
  {
  if(b[j]>b[j+1])
  {
  x=b[j];
  b[j]=b[j+1];
  b[j+1]=x;
  }
  }
  d=d+1;
}
}
