#include<math.h>
#include<stdio.h>
#include"inte.h"
#define max2(a, b) ((b) > (a) ?  (b) : (a))
#define max3(a, b, c) max2(max2((a),(b)), (c))


double mod(double x);
char cheknemn(int n);
static double tipainteg(double a, double b, int n, RRF func);






static double tipainteg(double a, double b, int n, RRF func)
{
	int i;
	double len = (b - a)/n, e = len/10000;
	double x1, x2;
	double f1, f2;
	double integall = 0;
	if((a >= b) || (n < 1))
		return 0;	
	for(i = 1; i < n; i++)
	{
		x1 = a + len * i;	
		f1 = (*func)(x1);
		integall += f1*len;
	}
	integall = integall + 0.5*len*((*func)(a + e) + (*func)(b - e));
	return integall;
}

double mod(double x)
{
	if(x < 0)
		return -x;
	else
		return x;
}



double norminteg(double a, double b, double eps, RRF func, ErrorCode *error_code)
{

	int i;
	int n = 100;
	double i1 = tipainteg(a, b, n, func), i2 = tipainteg(a, b, n, func);
	*error_code = I_OK;
	while((mod(i1 - i2) > eps*max3(1, i1, i2)) && (n < 10000000))
	{
			n = 2*n;
			printf("%d", n);
			i1 = tipainteg(a, b, n, func);
			i2 = tipainteg(a, b, 2*n, func);
	}
	if(n >= 9999999)
		*error_code = I_BIGN;
	return i2;
}













