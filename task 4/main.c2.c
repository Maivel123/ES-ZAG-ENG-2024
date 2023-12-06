#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   char charchter;
   printf("Please enter the number");
   scanf("%d",&n);
   printf("Please enter the charchter");
   scanf(" %c",&charchter);
   if(n%2==0){
    printf("The charchter is: %c\n",charchter);
   }else{
        if (charchter >= 'a' && charchter <= 'z') {
            charchter -= 32;
        }else if (charchter >= 'A' && charchter <= 'Z') {
            charchter += 32;
        }
        printf("The charchter is:%c",charchter);
   }
}
