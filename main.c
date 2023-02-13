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
	printf("min range: %f\n", toFloat(0xffffffff));  // min(siged)
	printf("max range: %f\n", toFloat(0x7fffffff));  // max(signed)
	printf("%f\n", toFloat(1));
	
	return 0;
}
