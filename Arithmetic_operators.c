#include<stdio.h>
void main()
{
int num1, num2;
int sum, diff, prod, quot, rem;
printf(“Enter any two integers:”);
scanf(“%d %d”, &num1, &num2);
sum=num1+num2;
diff=num1-num2;
prod=num1*num2;
quot=num1/num2;
rem=num1%num2;
printf(“Sum=%d \n”, sum);
printf(“Difference=%d \n”, diff);
printf(“Product=%d \n”, prod);
printf(“Quotient=%d \n”, quot);
printf(“Remainder=%d \n”, rem);
}
