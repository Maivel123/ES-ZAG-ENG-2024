#include <stdio.h>
#include <stdlib.h>

int main()
{   int n ;
    printf("enter the number \n");
    scanf("%d" , &n);
    while (n!=0){
    int dig = n%10 ;
    int rev = rev*10+dig;
    n=(n/10);
    printf("%d",dig);
    }}
