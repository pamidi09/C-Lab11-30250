#include <stdio.h>
#include <stdlib.h>

void cal(int a,int b)
{
    int sum,diff;
    sum=a+b;
    diff=a-b;
    printf("sum = %d\n",sum);
    printf("difference = %d \n",diff);
}

int main()
{
    int x,y;

    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    cal(x,y);
}
