#include <stdio.h>
void main()
{
int m,n,i,j;
printf("Enter the matrix size");
scanf("%d%d",&m,&n);
int num[m][n];
printf("Enter the matrix elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&num[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",num[i][j]);
}
printf("\n");
}
}
