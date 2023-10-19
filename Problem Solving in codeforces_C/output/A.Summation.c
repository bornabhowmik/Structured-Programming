#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    if(sum<0){
        sum*=(-1);
       
    }   
     printf("%lld", sum);
    return 0;
}