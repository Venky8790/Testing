#include<stdio.h>
void main()
{
int i,j,m,b,n = 10;
for(j = 31;j>=0; j--) 
{
	printf("%d",(n >>j)&1);
}
printf("\n");
for(i = 0, j = 31; i<j; i++, j--) 
{ 
m = n & (1 << i);
b = n & (1 << j);
if(m!= b)
{
	n = n ^ (1 << i);
	n = n ^ (1 << j);
}
}
for(j = 31;j>=0; j--) 
{
	printf("%d",(n >> j)&1);
}
printf("\n");
}
