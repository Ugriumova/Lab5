#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#define M_PI            3.14159265358979323846
#define c               0.4
#define d               1
float main()
{
	setlocale(LC_ALL, "RUS");
	//задание 1
	float gr;
	puts("Введите количество градусов");
	scanf_s("%f", &gr);
	printf("Синус угла в %f = %3.6f\n", gr, sin(gr * M_PI / 180));

	//задания 2 и 3
	float x, y, a, b;
	int A, B, C;
	puts("Введите значение x");
	scanf_s("%f", &x);
	a = log10(x);
	b = pow(a, 2) + sqrt(c * x);
	y = exp(2 * x) + pow(9.7, b);
	printf("При x = %2.1f y = %2.2f\n", x, y);
	puts("Условие выполнено");
	A = (int)a;
	B = (int)b;
	C = (int)y;
	if (A % 2 == 0 ^ B % 2 == 0 && A % 3 == 0 && B % 3 == 0 && C % 3 == 0)
		(puts("1"));
	else puts("0");

	//домашнее задание
	float x1, y1;
	puts("Введите значение x и y");
	scanf_s("%f%f", &x1, &y1);
	//ch = pow(cos(y1), 3) + pow(2, x) * d;
	//z = exp(y) + log(pow(sin(x), 2) + 7.4);
	printf("F = %3.7f", (pow(cos(y1), 3) + pow(2, x1) * d) / (exp(y1) + log(pow(sin(x1), 2) + 7.4)));
	return 0;

}