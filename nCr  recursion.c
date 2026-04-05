#include<stdio.h>
int ncr(int n, int r)
{
if(r == 0 || r == n)
     return 1;
else
     return ncr(n-1, r-1) + ncr(n-1, r);
}
int main()
{
int n, r, result;
printf("Enter values of n and r: ");
scanf("%d %d", &n, &r);
 
result = ncr(n, r);
printf("nCr (%dC%d) = %d", n, r, result);
 
return 0;
}
