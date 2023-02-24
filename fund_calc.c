#include <stdio.h>
#include "fx_S1318.h"

int main() {
	extern int toBinaryString(char buf[], int a);

	float a, b;
    fixed x, y;
    char buf_x[512], buf_y[512];
    
    printf("type two number to calculate: ");
	scanf("%f %f", &a, &b);
	x = fromFloat(a);
    y = fromFloat(b);
	toBinaryString(buf_x, x);
    toBinaryString(buf_y, y);

    printf("fixed number: %d %d\n", x, y);

    printf("1st number: %f, binary: %s\n", a, buf_x);
    printf("2nd number: %f, binary: %s\n\n", b, buf_y);

	printf("add: %f\n\n", toFloat(add(x, y)));
    printf("sub: %f\n\n", toFloat(sub(x, y)));

    printf("mul_float: %f\n", toFloat(mul_float(x, y)));
    printf("mul_bal: %f\n", toFloat(mul_bal(x, y)));
    printf("mul_fast: %f\n", toFloat(mul_fast(x, y)));
    printf("mul_long: %f\n\n", toFloat(mul_long(x, y)));

    printf("div_float: %f\n", toFloat(div_float(x, y)));
    printf("div_prev: %f\n", toFloat(div_prev(x, y)));
    printf("div_next: %f\n", toFloat(div_next(x, y)));
    printf("div_long: %f\n\n", toFloat(div_long(x, y)));

	return 0;
}