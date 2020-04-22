#include <stdio.h>

int x=0;

int main()
{

int y, opt_char = x;

switch(opt_char)
{

case 97:
y=1;
break;

case 98:
y=2;
break;

case 99:
y=3;
break;

case 100:
y=4;
break;

case 101:
y=4;
break;

default:
y=0;

}

return y;
}