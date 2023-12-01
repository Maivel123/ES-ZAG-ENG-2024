#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,f;
    f=1;
    i=1;
    printf("Enter the number ");
    scanf("%d",&num);
    while(i<=num)
    {
        f*=i;
        i++;
    }
    printf("result %d",f);
    return 0;

}
