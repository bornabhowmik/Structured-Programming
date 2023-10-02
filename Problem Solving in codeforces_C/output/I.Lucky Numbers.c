#include<stdio.h>
int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=10; i<=99; i++)

    if(a%10==0 && b%10==0){
        a/b;
        printf("YES");
    }
    else{
        printf("NO");
    }
}