#include<stdlib.h>
 
int main()
{
int *ptr, n, i, new_n;
printf("Enter initial number of elements: ");
scanf("%d", &n);
ptr = (int*) malloc(n * sizeof(int));
 
if(ptr == NULL)
{
  printf("Memory allocation failed");
  return 0;
}
 printf("Enter elements:\n");
 
for(i = 0; i < n; i++)
{
  scanf("%d", &ptr[i]);
}
  printf("Enter new size: ");
  scanf("%d", &new_n);
  ptr = (int*) realloc(ptr, new_n * sizeof(int));
 
if(ptr == NULL)
{
  printf("Reallocation failed");
  return 0;
}
// If size increased, take new elements
 
if(new_n > n)
{
  printf("Enter additional elements:\n");
 
 for(i = n; i < new_n; i++)
{
  scanf("%d", &ptr[i]);
}
}
 printf("Updated elements are:\n");
 
 for(i = 0; i < new_n; i++)
{
 printf("%d ", ptr[i]);
}
free(ptr);
return 0;
}
l
