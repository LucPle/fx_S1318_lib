#include <stdio.h>
#include "fx_S1318.h"

int main() {
	extern int toBinaryString(char buf[], int a);

	float a = 150.75;
	float b = 22.5;
	fixed deg1 = 21;
	fixed deg2 = 102;
	fixed deg3 = 250;
	fixed deg4 = 331;
    fixed x, y;
    char buf_x[512], buf_y[512];

	x = fromFloat(a);
    y = _fromFloat(b);
	toBinaryString(buf_x, x);
    toBinaryString(buf_y, y);

	printf("main.c에서는 구현한 fixed point의 기본 정보 및 연산 결과를 제공합니다.\n");
	printf("자세한 테스트는 fund_calc.c와 trig_calc.c를 참고하시기 바랍니다.\n\n");

	printf("표현 가능한 최소 값: %lf\n", toDouble(0x80000000));  // min(siged)
	printf("표현 가능한 최대 값: %lf\n", toDouble(0x7fffffff));  // max(signed)
	printf("표현 가능한 최소 간격: %lf\n\n", toDouble(0x00000001));

	printf("%f를 fx_S1318로 변환 (fromFloat 함수): %d | %s\n", a, x, buf_x);
	printf("%f를 fx_S1318로 변환 (_fromFloat 매크로): %d | %s\n\n", b, y, buf_y);

	printf("사칙연산 연산 테스트 환경: a = %f, b = %f\n", a, b);
	printf("1st number: %f, fx_S1318's binary: %s\n", a, buf_x);
    printf("2nd number: %f, fx_S1318's binary: %s\n\n", b, buf_y);

	printf("add: %f\n\n", toFloat(add(x, y)));
    printf("sub: %f\n\n", toFloat(sub(x, y)));

    printf("mul_float: %f\n", toFloat(mul_float(x, y)));
    printf("mul_bal: %f\n", toFloat(mul_bal(x, y)));
    printf("mul_fast: %f (shift 연산으로 인한 결과)\n", toFloat(mul_fast(x, y)));
    printf("mul_long: %f\n\n", toFloat(mul_long(x, y)));

    printf("div_float: %f\n", toFloat(div_float(x, y)));
    printf("div_prev: %f\n", toFloat(div_prev(x, y)));
    printf("div_next: %f\n", toFloat(div_next(x, y)));
    printf("div_long: %f\n\n", toFloat(div_long(x, y)));

	printf("삼각함수 연산 (제 1사분면): deg = %d°\n", deg1);
	printf("sin %d° = %f\n", deg1, sinDeg(deg1));
	printf("cos %d° = %f\n", deg1, cosDeg(deg1));
	printf("tan %d° = %f\n\n", deg1, tanDeg(deg1));

	printf("삼각함수 연산 (제 2사분면): deg = %d°\n", deg2);
	printf("sin %d° = %f\n", deg2, sinDeg(deg2));
	printf("cos %d° = %f\n", deg2, cosDeg(deg2));
	printf("tan %d° = %f\n\n", deg2, tanDeg(deg2));

	printf("삼각함수 연산 (제 3사분면): deg = %d°\n", deg3);
	printf("sin %d° = %f\n", deg3, sinDeg(deg3));
	printf("cos %d° = %f\n", deg3, cosDeg(deg3));
	printf("tan %d° = %f\n\n", deg3, tanDeg(deg3));
	
	printf("삼각함수 연산 (제 4사분면): deg = %d°\n", deg4);
	printf("sin %d° = %f\n", deg4, sinDeg(deg4));
	printf("cos %d° = %f\n", deg4, cosDeg(deg4));
	printf("tan %d° = %f\n\n", deg4, tanDeg(deg4));
	
	return 0;
}
