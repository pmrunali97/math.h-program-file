#include <stdio.h>
#include "project.h"

/*returns the x power y value
double mpow(double x, double y) {
	double res = 1;
	while(y) {
		if((y % 2) == 1)
			res = res * x;
		y /= 2;
		x = x * x;
	}
	return res;
}*/
/*returns the absolute value of x*/
double mabs(double x) {
	double res;
	if(x > 0.0 || x == 0.0) 
		return x;
	else 
		return x * (-1);
}

/*returns the squareroot of the x */
double msqrt(double x) {
	double res;
	int i;
	if(x > 0.0) {
		for(i = x; i > 0; i--)
			res = x / 2;
	}
	return res;
}

/*Returns the remainder of x divided by y*/
/*double mfmod(double x, double y) {
	
	return res;
}*/

