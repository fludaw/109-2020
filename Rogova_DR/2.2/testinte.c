#include<stdio.h>
#include<math.h>
#include"inte.h"
#define max2(a,b) ((b) > (a) ? (b) : (a))
#define max3(a, b, c) (max2(max2((a), (b)), (c)))


double cube(double x);
double line(double x);
double square(double x);
double justzero(double x);
double modul(double x);


int main(void)
{
<<<<<<< HEAD
	int n, i, num = 4;
	double a, b, res, e = 0.001;
	double trueans[] = {16.25, 2.5, 6.3, 0};
	RRF funcs[] = {cube, line, square, justzero};
=======
	int i, num = 4;
	double res, e = 0.001;
	double trueans[] = {16.25, 2.5, 6.3, 0};
	RRF funcs[] = {incorr, line, square, justzero};
>>>>>>> 76ed227e4382bd0549084eb068794cfcdd37cf92
	a = 2;
	b = 3;
	n = 10000;
	for(i = 0; i < num; i++)
	{
<<<<<<< HEAD
		res = (*integ)(a, b, n, funcs[i]);
=======
		res = integ(a, b, n, funcs[i]);
>>>>>>> 76ed227e4382bd0549084eb068794cfcdd37cf92
		if(modul(res - trueans[i]) < e*max3(res, trueans[i], 1))
		{
			printf("correct:\n%lf\nmy:\n%lf\nwin)))\n", trueans[i], res);
		}
		else
		{
			printf("correct:\n%lf\nmy:\n%lf\nlose(((\n", trueans[i], res);
		}
	}
<<<<<<< HEAD
=======


>>>>>>> 76ed227e4382bd0549084eb068794cfcdd37cf92
}


double cube(double x)
{
	return x*x*x;
}

<<<<<<< HEAD
double line(double x)
=======
double line(double x);
>>>>>>> 76ed227e4382bd0549084eb068794cfcdd37cf92
{
	return x;
}

<<<<<<< HEAD
double square(double x)
=======
double square(double x);
>>>>>>> 76ed227e4382bd0549084eb068794cfcdd37cf92
{
	return x*x;
}

double justzero(double x)
{
	return x*0;
}

double module(double x)
{
	if(x < 0)
		return -x;
	else
		return x;
}
