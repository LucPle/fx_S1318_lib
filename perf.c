#include <stdio.h>
#include "fx_S1318.h"

int main() {
	int i, sum;

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += mul_float(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += mul_bal(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += mul_fast(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += mul_long(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += div_float(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += div_prev(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += div_next(i, i);
    }

    sum = 0;
    for (i = 0; i < 100000000; i++) {
        sum += div_long(i, i);
    }    
	return 0;
}