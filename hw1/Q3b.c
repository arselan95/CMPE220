#include <stdio.h>


int int_shifts_are_arithmetic() {
 int x = 1; // bits set to 1
 printf("%i\n",(x >> 1) > 0); //perform right shift. 
 return (x >> 1) > 0;
 }

 int main()
{
    //just tesed on mac yeilds 0. 
    //if shift is logical the word will be positive as MSB will be filled with 0 instead of previous MSB
    //tested with x=1 and x=-1
int_shifts_are_arithmetic();
}