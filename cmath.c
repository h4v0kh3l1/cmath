//
//  cmath.c
//  cmath
//
//  Created by Heli Wang on 11/15/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "cmath.h"

bool is_c(cint a)
{
	return ((a != NULL) && ((a+1) != NULL));
}

cint new_c(int r, int i)
{
	cint new = (cint) malloc(sizeof(int)*2);
	*new = r;
	*(new+1) = i;
	return new;
}

void print_c(cint a)
{
	printf("(%d, %d)", *a, *(a+1));
}

cint add_c(cint a, cint b)
{
	cint new = (cint) malloc(sizeof(int)*2);
	*new = *a + *b;
	*(new+1) = *(a+1) + *(b+1);
	return new;
}

cint mult_c(cint a, cint b)
{
	cint new = (cint) malloc(sizeof(int)*2);
	new[0] = a[0] * b[0] - a[1] * b[1];
	new[1] = a[0] * b[1] + a[1] * b[0];
	return new;
}

cint conj_c(cint a)
{
	cint new = (cint) malloc(sizeof(int)*2);
	*new = *a;
	*(new+1) = -*(a+1);
	return new;
}