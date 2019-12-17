#include<stdio.h>
#define N 10
 int main(void)
 {
     int a[N],max,i;
     printf("Enter a:\n");
     for(i=0;i<N;i++)
     {
         scanf("%d",&a[i]);
     }

    Gzz(a,N);

     for(i=0;i<N;i++)
     {
         printf("%5d",a[i]);
     }

     return 0;
 }

 void Gzz(int x[],int n)
 {
     int i,j,temp,max;
     for(i=0;i<n-1;i++)
     {
         max=i;
         for(j=i+1;j<n;j++)
         {
         if(x[j]>x[i])
         {
            max=j;
         }
         } 
         temp=x[max];
         x[max]=x[i];
         x[i]=temp;
     }
 }