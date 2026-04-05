#include<stdio.h> 
int main() 
{ 
int num, rem, rev = 0, original; 
printf("Enter a number: "); 
scanf("%d", &num); 
original = num; 
while(num != 0) 
{ 
rem = num % 10; 
rev = rev * 10 + rem; 
num = num / 10; 
} 
if(original == rev) 
printf("The number is a Palindrome"); 
else 
printf("The number is not a Palindrome"); 
return 0;
}
