#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	double x,a,b,c,result;
	printf("Enter x: "); scanf("%lf",&x);
	a = x*x*x*x*x*x*x;
	b = x*x*x*x*x*x*x;
	c = x*x*x*x*x*x*x;
	result = a*b*c;
	printf("x v 21 stepeni = %lf",result);
	return 0;
}

