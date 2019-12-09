#include<stdio.h>
 int main(void)
 {
     int n,i;
     double term=1,sum=0;
     printf("Enter n:\n");
     scanf("%d",&n);
     i=1;
     while(i<=n) 
     {
        term=term*i;
         sum+=1/term;
         i++;
     }
     sum+=1;
     printf("sum =%.5lf",sum);
     return 0;
 }