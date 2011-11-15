//
//  vecmath.c
//  cmath
//
//  Created by Heli Wang on 11/15/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//

#include <stdio.h>

#include "vecmath.h"


bool is_vec(vec a)
{
	return sizeof(int*) * ((int)*a) + sizeof(int) == sizeof(a);
}

vec new_v(cint* carray, int l)
{
	vec new = (vec) malloc(l*sizeof(int*) + sizeof(int));
	*new = (int*) l;
	for (int i = 0; i < l; i++)
		{
		*(new+1+i) = *(carray+i);
		}
	return new;
}

void free_v(cint* a)
{
	int l = (int)*a;
	for (int i = l-1; i >= 0; i--) {
		free(*(a+1+i));
	}
	free(a);
}

vec add_v(vec a, vec b)
{
	if ((int)*a == (int) *b) {
		vec new = (vec) malloc((int)(*a)*sizeof(int*)+sizeof(int));
		*new = *a;
		for (int i = 0; i < (int) *a; i++) {
			*(new+1+i) = add_c(*(a+1+i), *(b+1+i));
		}
		return new;
	}
	else return NULL;
}