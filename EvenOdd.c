#include <stdio.h>
void main()
{
int num;
/* Input a number from user */
printf("Enter a number: ");
scanf("%d", &num);
/* Check the divisibility of num by 2 */
if(num % 2 == 0)
{
/* True part means remainder is zero */
printf("%d is even number",num);
}
else
{
/* False part means remainder is non-zero */
printf("%d is odd number”,num);
}
}
