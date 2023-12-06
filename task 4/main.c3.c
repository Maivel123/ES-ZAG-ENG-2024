#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , x;
    printf("enter the number ");
    scanf("%d",&n);
    while (n > 0) {
    x = n % 2;
    n /= 2;
    printf("%d",x);
  }
}
