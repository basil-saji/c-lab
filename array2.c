#include <stdio.h>
void main()
{
int n,i;
printf("Enter the number of elements: ");
scanf("%d", &n);
int num[n];
for(i=0; i<n; i++)
{
printf("Enter element %d: ", i+1);
scanf("%d", &num[i]);
}
printf("\n\n");
for(i=0; i<n; i++)
{
printf("%d", num[i]);
}
printf("\n\n");
}
