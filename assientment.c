#include<stdio.h> 
int main() 
{ 
int a, b, choice; 
printf("Enter two numbers: "); 
scanf("%d %d", &a, &b); 
printf("Choose operation:\n"); 
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n"); 
scanf("%d", &choice); 
switch(choice) 
{ 
case 1: 
printf("Sum = %d", a + b); 
break; 
case 2: 
printf("Difference = %d", a - b); 
break; 
case 3: 
printf("Product = %d", a * b); 
break; 
case 4: 
printf("Quotient = %d", a / b); 
break; 
default: 
printf("Invalid Choice"); 
} 
return 0; 
}
