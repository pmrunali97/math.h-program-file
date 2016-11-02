#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "function.h"
#define DIV(x, y) (x/y)
#define MULTI(x, y) (x * y)

/*Returns the x power y value*/
double mpow(double x, double y) {
	double res = 0;
	int i, flag;
	if(x == 0 && y <= 0) {
		//printf("Domain error occured.");
		return -1;
	}
	if(y < 0)
		flag = 0;
	else if(y == 0)
		flag = 1;
	else if(y == 1)
		return x;
	if(flag == 0)
		return 1 / mpow(x, -y);
	else if(flag == 1)
		return 1;
	return x * mpow(x, y-1);
}

/*Returns the x power y value*/
float mpowf(float x, float y) {
	float res = 0;
	int i, flag;
	if(x == 0 && y <= 0) {
		//printf("Domain error occured.");
		return -1;
	}
	if(y < 0)
		flag = 0;
	else if(y == 0)
		flag = 1;
	else if(y == 1)
		return x;
	if(flag == 0)
		return 1 / mpowf(x, -y);
	else if(flag == 1)
		return 1;
	return x * mpowf(x, y-1);
}
/*Returns the absolute value of x*/
double mfabs(double x) {
	double res;
	if(x > 0.0 || x == 0.0) 
		return x;
	else 
		return x * (-1);
}

/*Returns the largest integer value less than or equal to x.*/
double mfloor(double x) {
	double res;
	res = (int)x;
	return res;
}

/*Returns the squareroot of the x */
double msqrt(double x) {
	double res, temp;
	if(x == 0)
		return 0;
	else if(x < 0.0) {
		/* printf("\tSquareroot of negative number doesn't exist\n"); */
		return -1;
	}
	else {
		temp = 0.0000001;
		for(res = 0.0; res < x; res = res + temp) {
			if((res * res) > x) {
				res = res - temp;
				break;
			}
		}
		return res;
	}
}


/*Returns the remainder of x divided by y*/
double mfmod(double x, double y) {
	double q, r;
	int res;
	if(y == 0.0) {
		printf("we cannot divide by zero\n");
		return 0;
	}
	if(x == y)
		return 0;
	q = DIV(x, y);
	res = q;
	q = res;
	r = x - MULTI(q, y);
	if(r < 0.0)
		r = r * (-1);

 	return r;
}

/*Returns round value of x */
double mround(double x) {
	double res;	
	if(x == 0.0)
		return x;
	if(x < 0) 
		res = (int)(x - 0.5);
	else
		res = (int)(x + 0.5);
	return res ;	
}

/* Returns factorial of a number */
double mfact(double x) {
	if(x == 0)
		return 1;
	else if(x < 0)
		 return 0;
	return (x * mfact(x-1)); //recursive call
}

/*Returns the smallest integer value greater than or equal to x.*/
double mceil(double x) {
	double  res;
	if(x == 0.0)  
		return x;
	else if(x > 0.50) {
		res = (int)(x + 0.5 );
		return res;
	}
	else { 	
		res = (int)(x - 0.5);
		return res;
	}
}

/*Returns the value of 2 raised to the xth power.*/
double mexp2(double x) {
	if(x < 0)
		return 1 / mexp2(-x);
	else if(x == 0.0)
		return 1;
	else if(x == 1.0)
		return 2;
	else
		return 2 * mexp2(x-1); 
}

/* Returns numbers positive or negative */
double pos_neg(double x) {
	if(x < 0.0)
		return 0; /* 0 indicates number is negative*/
	else
		return 1; /* 1 indicates number is positive */
}

/* Returns greater number */
double max(double x, double y) {
	if(x > y)
		return x;
	else 
		return y;
}

/* Returns smaller number */
double min(double x, double y) {
	if(x < y)
		return x;
	else 
		return y;
}

/* Returns x*2^exp */
double mldexp(double x, int exponent) {
	double res;
	if(x == 0)
		return 0;
	else {
		res = x * mpow(2, exponent);
		return res;
	}
}

/*Returns integer value by truncating decimal point value of double value.*/
double mtrunc(double x) {
	int res;
	res = (int)x;
	return (double)res;
}

/* Returns square of number */
double msquare(double x) {
	double res;
	if(x == 0.0)
		return 0;
	res = mpow(x, 2);
	return res;
}

/* Returns cube of number */
double mcube(double x) {
	double res;
	if(x == 0.0)
		return 0;
	res = mpow(x, 3);
	return res;
}
double mmodf(double x, double *integer) {
	double res;
	int integral;
	integral = (int)x;
	res = x - integral;
	return res;
}
