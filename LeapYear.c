#include <stdio.h>
void main()
{
int year;
printf("Enter a year for leap year check\n");
scanf("%d", &year);
if(((year%4==0)&&(year%100!=0))||(year%400==0))
{
/* Entered year is a leap year */
printf("%d is leap year\n", year);
}
else
{
/* Entered year is not a leap year */
printf("%d is not leap year\n", year);
}
}
