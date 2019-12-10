#include<stdio.h>
#define N 10
int main(void)
{
int a[N]={0},i,max;

printf("Enter a:\n");
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<N;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("Max is %d\n",max);
return 0;
}