long p1(long n){
	long x = n;
	x = x-1;
	long r = p1(x);
	return r*n;
}
