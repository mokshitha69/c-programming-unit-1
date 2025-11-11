#include<stdio.h>
int main()
{
 int n;
 printf("Enter an integer:");
 scanf("%D",&n);
 if(n<0)
 {
    printf("You entered %D.\n",n);
 }
 printf("The if statement is easy.");
 return 0;
}
