#include<stdio.h>
int main()
{
int arr[5] = {10, 20, 30, 40, 50};
int *ptr;
int i;
ptr = arr;
printf("Array elements using pointer arithmetic:\n");
 
for(i = 0; i < 5; i++)
{
printf("%d ", *(ptr + i));
}
printf("\n");
printf("Demonstrating pointer increment:\n");
 
for(i = 0; i < 5; i++)
{
printf("%d ", *ptr);
ptr++;
}
return 0;
}
