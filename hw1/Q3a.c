#include <stdio.h>

typedef unsigned char *pointer;

//providedd by book (fig 2.4)
void show_bytes(pointer start, int len) {
int i;
for (i = 0; i < len; i++)
printf(" %.2x", start[i]);
printf("\n");
}

//used slides as reference. 
void show_short(short i)
{
    show_bytes((pointer) &i, sizeof(short));
}

void show_long(long i) {
show_bytes((pointer) &i, sizeof(long));
}

void show_double(double i) {
show_bytes((pointer) &i, sizeof(double));
}

int main()
{
double a = 15213.00;
show_short(a);
show_long(a);
show_double(a);

}