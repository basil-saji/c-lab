#include <stdio.h>
#include <string.h>
void main()
{
char temp[100], array[100][100];
int n,i,j;

printf("Enter name count: ");
scanf("%d", &n);

printf("Enter names: ");
for(i=0; i<n; i++)
{
scanf("%s", array[i]);
}

for(i=0; i<n-1; i++)
{
for(j=0; j<n-i-1; j++)
{
if(strcmp(array[j],array[j+1])>0)
{
strcpy(temp, array[j]);
strcpy(array[j], array[j+1]);
strcpy(array[j+1],temp);
}
}
}

printf("Sorted names: ");
for(i=0; i<n; i++)
{
printf("%s\n", array[i]);
}
}
