#include <stdio.h>
void main()
{
int num;
/* Input a number from user */
printf("Enter a number: ");
scanf("%d", &num);
/* Compare num with 0 */
if(num > 0)
{
/* True part means num > 0 */
printf("You entered a positive number");
}
else
{
/* False part means num < 0 */
printf("You entered a negative number”);
}
}
