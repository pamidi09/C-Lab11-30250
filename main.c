#include <stdio.h>
#include <stdlib.h>

//Q3

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




//Q2

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




//Q1
void cal()
{
    int n1,n2,sum;

    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);

    (sum=n1+n2);
    printf("sum = %d ",sum);
}

int main()
{
   cal();
}
