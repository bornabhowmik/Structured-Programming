#include<stdio.h>
int main(){

    char a;
    // printf("lowercase alphabet character");
    scanf("%c", &a);

    char next;
    scanf("%c", &next);

    if(a>='a' && a<='z'){
        next=a+1;
        printf("%c\n", next);
    }

    return 0;
}