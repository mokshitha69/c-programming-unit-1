#include<stdio.h>
int main()
  float num1,num2,result;
  char op;
--  printf("Simple calculator using switch-case"\n);
    printf("                \n");
    scanf("%c",&op);
    printf("Enter two numbers:");
    scanf("%f",&num1,&num2);
  switch (op) {
     case '+'
       result=num1+num2;
       printf("Result=%.2f\n",result);
       break;
     case '-':
       result=num1+num2;
       printf("Result=%.2f\n",result);
       break;
     case '*':
       result=num1+num2;
       printf("Result=%.2f\n",result);
       break;
     case '/':
       if(num2!=0)
          printf("Result=%.2f\n",num1/num2);
       else
           printf("Error! Division by zero is not allowed.\n");
       break;
     default:
          printf("Invalid operator! Please use +,-,*,or /.\n");
       }
       return 0;
    }
