#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=a*1.0/b;

    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%f\n", div);

    return 0;
}