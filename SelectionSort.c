#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int readf(int []);
int selectionsort(int [],int );
display(int [],int );
main()
{
int a[50],n;
clrscr();
n=readf(a);
selectionsort(a,n);
display(a,n);
getch();
}
int readf(int a[])
{
int i,n;
printf(&quot;size of an array:&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;Enter the elements:&quot;);

Programs on various Searching &amp; Sorting Techniques

2

for(i=0;i&lt;n;i++)
scanf(&quot;%d&quot;,&amp;a[i]);
return n;
}
int selectionsort(int a[],int n)
{
int pass,min_index,i,temp;
for(pass=0;pass&lt;n-1;pass++)
{
min_index=pass;
for(i=pass+1;i&lt;n;i++)
if(a[i]&lt;a[min_index])
min_index=i;
if(min_index!=pass)
{
temp=a[pass];
a[pass]=a[min_index];
a[min_index]=temp;
}
}
}
display(int a[], int n)
{

Programs on various Searching &amp; Sorting Techniques

3

int i;
printf(&quot;Elements after sorting are:\n&quot;);
for(i=0;i&lt;n;i++)
printf(&quot;%d\t&quot;,a[i]);
}
