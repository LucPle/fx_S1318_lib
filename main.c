#include <stdio.h>
#include "fixed.h"

int main()
{
	extern int toBinaryString(char buf[], int a);

	float f ;
	fixed fx;
	char buf[512];

	scanf("%f", &f);
	fx = fromFloat(f);
	toBinaryString(buf, fx);
	printf("%s\n", buf);
	printf("%f\n", toFloat(fx));
	printf("%f\n", toFloat(0));  // min(unsiged)
	printf("%f\n", toFloat(0xffffffff));  // max(unsigned)
	printf("%f\n", toFloat(1));
	
	extern fixed gl_half;
	fprintf(stderr, "0.5 is = %f\n", toFloat(gl_half));

	unsigned int z = -1;
	printf("%u\n", z);
	return 0;
}


