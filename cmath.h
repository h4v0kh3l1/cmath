//
//  cmath.h
//  cmath
//
//  Created by Heli Wang on 11/15/11.
//  Copyright (c) 2011 Carnegie Mellon. All rights reserved.
//

#include <stdbool.h>

#ifndef cmath_cmath_h
#define cmath_cmath_h
#define cint int*

bool is_c(cint a);
cint new_c(int r, int i);
void print_c(cint a);
cint add_c(cint a, cint b);
cint mult_c(cint a, cint b);
cint conj_c(cint a);



#endif
