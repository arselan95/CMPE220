__global__
void absdiff(long *res, long *x, long *y)
{
if(x>y)
*res = *x - *y;

else 
*res = *y - *x;
}
