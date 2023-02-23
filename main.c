#include <stdio.h>
#include "fx_S1318.h"

int main() {
	extern int toBinaryString(char buf[], int a);

	float f ;
	fixed fx;
	char buf[512];

	scanf("%f", &f);
	fx = fromFloat(f);
	printf("fromfloat result : %d\n", fx);
	toBinaryString(buf, fx);
	printf("buf: %s\n", buf);
	printf("%f\n", toFloat(fx));

	printf("min range: %lf %f\n", toDouble(0x80000000), toFloat(0x80000000));  // min(siged)
	printf("max range: %lf %f\n", toDouble(0x7fffffff), toFloat(0x7fffffff));  // max(signed)
	printf("small: %lf %f\n", toDouble(0x7fffffff), toFloat(0x7fffffff));


	printf("----- test mul -----\n");
	printf("mul_float: %d", toFloat(add(a, b)));
	return 0;
}
