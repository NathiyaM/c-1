#include <stdio.h>
int main()
{
int r, a = 1, s, i, j;

printf("Enter number of r: ");
scanf("%d",&r);
for(i=0; i<r; i++)
{
for(s=1; s <= r-i; s++)
printf("  ");
for(j=0; j <= i; j++)
{
if (j==0 || i==0)
a = 1;
else
 a = a*(i-j+1)/j;
printf("%4d", a);
 }
 printf("\n");
}
 return 0;
}
