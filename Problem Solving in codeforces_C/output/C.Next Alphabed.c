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
    else{
        printf("%c\n");
    }

    return 0;

    // printf("%c", a+1);
}