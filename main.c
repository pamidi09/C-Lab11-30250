#include <stdio.h>
#include <stdlib.h>

int product(int a, int b)
{
    int pro;
    pro=a*b;

    return pro;
}

int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("the product is %d \n",product(x,y));
}
