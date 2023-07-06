#include <stdio.h>
#include "fx_S1318.h"

int main() {
    fixed deg;

    printf("type degree to calculate trigonometric functions(MUST INT !!): ");
	scanf("%d", &deg);

    if (deg < 0 || deg > 360){
        printf("Out of Range!!\n");
        return 1;
    }
    
    printf("Sin %d°: %f\n", deg, sinDeg(deg));
    printf("Cos %d°: %f\n", deg, cosDeg(deg));
    if (cosDeg(deg) != 0) {
        printf("Tan %d°: %f\n", deg, tanDeg(deg));
    }
    else {
        printf("Tan %d°: Cannot Calculate !!\n", deg);
    }

	return 0;
}