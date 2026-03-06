#include <stdio.h>
void main()
{
int m,n,i,j, trace=0;
printf("Enter the matrix size: ");
scanf("%d%d",&m,&n);
int num[m][n];
printf("Enter the matrix elements: ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&num[i][j]);
}printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t", num[i][j]);
if (i==j)
trace=trace+num[i][j];
}printf("\n");
}
printf("\nTrace: %d\n", trace);
}
