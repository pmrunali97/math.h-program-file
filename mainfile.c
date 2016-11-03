/*****************************************************************************
 * Copyright (C) Mrunali M.P. pawarmm16.comp@coep.ac.in
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include "function.h"

int main(int argc, char *argv[]) {
	FILE *fp;
	char *tok, *t_id = NULL, *t_fun = NULL, *input1 = NULL, *input2 = NULL, *out = NULL, line[128];
	double d, res , x, y;
	int ch, z; 
	tok = (char*)malloc(sizeof(char));
	fp = fopen(argv[1], "r");
	if (fp == NULL) { 
		perror ("error opening file");
		exit(errno);
	}

	/*
		* Here I have considered id for each function such as -
		0 for mpow function.
		1 for mfabs function.
		2 for msqrt function.
		3 for mfmod function.
		4 for mfloor function.
		5 for mceil function.
		6 for mtrunc function
		7 for mround function
		8 for mexp2 function
		9 for mldexp function
		10 for mfact function
		11 for pos_neg function
		12 for max function
		13 for min function
		14 for msquare function
		15 for mcube function
		16 for mpowf function
		17 for mroundl function
		18 for area_rect function		
	*/

	else {
		printf("**************************  Test cases on Math.h functions  ***************************\n\n");
		while (fgets(line, sizeof (line),fp)) {
			tok = strtok(line," ");
			if (tok != NULL) {
				t_id = tok; // first token				
			}
			printf("\n");
			ch = atoi(t_id); /* Converting string to int */
			switch(ch) {
				case 0:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;             
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;           
					x = atof(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;          
					y = atof(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;               
					d = atof(out);
					/* call to power function */
					res = mpow(x, y); 
					/* comparing both results */       
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 1:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					 /* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call  to mfabs function */
					res = mfabs(x);
					/* comparing both results */   
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 2:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					 /* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call  to msqrt function */
					res = msqrt(x);
					/* comparing both results */   
					if(d == res)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
					
				case 3:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;
					y = atof(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call to mfmod function */
					res = mfmod(x, y);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 4:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mfloor function */
					res = mfloor(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 5:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mceil function */
					res = mceil(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 6:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mtrunc function */
					res = mtrunc(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 7:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mround function */
					res = mround(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 8:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mexp2 function */
					res = mexp2(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 9:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;
					z = atoi(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mldexp function */
					res = mldexp(x, z);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 10:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mfact function */
					res =  mfact(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 11:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call  pos_neg function */
					res =  pos_neg(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 12:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;
					y = atof(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call  max function*/
					res = max(x, y);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 13:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;
					y = atof(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call min function */
					res = min(x, y);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 14:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call msquare function */
					res = msquare(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 15:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mcube function */
					res = mcube(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 16:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;             
					printf("\t %s\t", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;           
					x = atof(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;          
					y = atof(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;               
					d = atof(out);
					/* call to mpowf function */
					res = mpowf(x, y); 
					/* comparing both results */       
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 17:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;
					printf("\t %s ", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;
					x = atof(input1);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;
					d = atof(out);
					/* call mroundl function */
					res = mroundl(x);
					/* comparing both results */  
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
				case 18:
					/* function name's token */
					tok = strtok(NULL, " ");
					t_fun = tok;             
					printf("\t %s", t_fun);
					/* first input token */
					tok = strtok(NULL, " ");
					input1 = tok;           
					z = atoi(input1);
					/* second input token */
					tok = strtok(NULL, " ");
					input2 = tok;          
					y = atof(input2);
					/* output token */
					tok = strtok(NULL, " ");
					out = tok;               
					d = atof(out);
					/* call to area_rect function */
					res = area_rect(z, y); 
					/* comparing both results */       
					if(res == d)
						printf("\t[PASS]");
					else
						printf("\t[FAIL]");
					printf("\n\t------------------------------\n");
					break;
					
				default:
					printf("Wrong choice!");
					break;
					
					
			}
		}
		printf("**************************************************************************\n");
	}
	return 0;
}

				
