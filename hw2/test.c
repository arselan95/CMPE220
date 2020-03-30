#include <string.h>
#include <stdio.h>



int main()
{
// Take any two strings
char s1[] = "Wassup c programming";
char s2 = 'p';
char* p;
// Find first occurrence of s2 in s1
p = strchr(s1, s2);
// Prints the result
if (p) {
printf("String found\n");
printf("%s",p);
                } else
printf("String not found\n");
return 0;
        }