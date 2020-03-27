#include<math.h>
#include<stdio.h>
#include"root.h"



double findroot(double a, double b, double eps, RRF func)
{
	double end1 = a, mid = (a + b)/2, end2 = b ;
	double fend1, fmid, fend2;
	double lennow = b - a;
	if((*func)(end1)*(*func)(end2) >= 0)
		return b+100000;
	while(lennow > eps)
	{
		mid = (end1 + end2)/2;
		fmid = (*func)(mid);
		if(fmid*fend1 <= 0)
		{
			end2 = mid;
			fend2 = fmid;
		}
		else
		{
			end1 = mid;
			fend1 = fmid;
		}
		lennow = end2 - end1;
	}
	return (end1 + end2)/2;
}
