//
//  vecmath.h
//  cmath
//
//  Created by Heli Wang on 11/15/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//


#ifndef cmath_vecmath_h
#define cmath_vecmath_h

#include <stdbool.h>
#include <stdlib.h>
#include "cmath.h"

#define vec cint*

bool is_vec(vec a);
vec new_v(cint* carray, int l);
void free_v(cint* a);
vec add_v(vec a, vec b);



#endif
