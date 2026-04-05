#include<stdio.h> 
int main() 
{ 
int a[10][10], i, j, rows, cols; 
printf("Enter number of rows and columns: "); 
scanf("%d %d", &rows, &cols); 
printf("Enter the matrix elements:\n"); 
for(i = 0; i < rows; i++) 
{ 
for(j = 0; j < cols; j++) 
{ 
scanf("%d", &a[i][j]); 
} 
} 
printf("Matrix elements are:\n"); 
for(i = 0; i < rows; i++) 
{ 
for(j = 0; j < cols; j++) 
{ 
printf("%d ", a[i][j]); 
} 
printf("\n"); 
} 
return 0; 
}
