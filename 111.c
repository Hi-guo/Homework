#include<stdio.h>

int main(void)
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    switch(a)
    { 
        case 0:
        break;
        case 1:
        printf("apples=3\n");
        break;
        case 2:
        printf("pears=2.5\n");
        break;
        case 3:
        printf("oranges=4.1\n");
        break;
        case 4:
        printf("grapes=10.2\n");
        break;
        default:
        printf("0\n");
    }
    return 0;
}