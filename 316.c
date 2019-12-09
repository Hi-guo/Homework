#include<stdio.h>
int GZZ(int x)
{
if((x%4==0)&&(x%100!=0))
{
 return 1;
}
return 0;   
}
int main(void)
{
    int i,f,a=0;
    for(i=2019;i<=2050;i++)
    {
    f=GZZ(i);
    if(f==1)
    {
        a++;
        printf("%d ",i);
    }
    }
    printf("%d\n",a);
    return 0;
}


