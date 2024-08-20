#include<stdio.h>
void main()
{
int len, wid;
int area, peri;
printf(“Enter length and width of a rectangle:”);
scanf(“%d %d”, &len, &wid);
area=len *wid;
peri=2*(len+wid);
printf(“ Area of a rectangle is: %d \n”,area);
printf(“Perimeter of a rectangle is: %d”, peri);
}
