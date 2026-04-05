#include<stdio.h> 
#include<string.h> 
int main() 
{ 
char str1[50], str2[50], str3[50]; 
printf("Enter first string: "); 
scanf("%s", str1); 
printf("Enter second string: "); 
scanf("%s", str2); 
printf("Length of first string = %lu\n", strlen(str1)); 
strcpy(str3, str1);  
printf("Copied string = %s\n", str3); 
strcat(str1, str2); 
printf("Concatenated string = %s\n", str1); 
if(strcmp(str2, str3) == 0) 
printf("Strings are equal\n"); 
else 
printf("Strings are not equal\n"); 
return 0; 
}
