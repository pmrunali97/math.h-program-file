/*******************************************************************
 * This is a new math.h library functions.
 * Some Functions of math.h header file and some are new functions.
 *******************************************************************/
#ifndef __FUNCTION_H
#define __FUNCTION_H

typedef struct rectangle {
	int len;
	float bre;
}rect;

double area_rect(int l, double b);			/* computes area of rectangle*/

double mpow(double x, double y); 			/* calculates power of double number */
float mpowf(float x, float y);				/* calculates power of float number */
double mfabs(double x);  				/* absolute value */
double msqrt(double x);  				/* square root of number */
double mfmod(double x, double y);  			/* returns reminder */
double mfloor(double x);  				/* largest integer value less than or equal to x */
double mceil(double x);					/* smallest integer value greater than or equal to x */
double mtrunc(double x);			  	/* truncates x and gives integer value */
double mround(double x);  				/* round value of x */
long double mroundl(long double x);  			/* round value of x */
double mexp2(double x);  				/* calculates 2 raised to the xth power */ 		
double mldexp(double x, int exponent);  		/* computes x*2^exp */
double mfact(double x);  				/* factorial of number */
double pos_neg(double x);  				/* number positive or negative */
double max(double x, double y);  			/* returns maximum number */
double min(double x, double y);			 	/* returns minimum number */
double msquare(double x);				/* returns square of number */
double mcube(double x);					/* returns cube of number */

#endif










