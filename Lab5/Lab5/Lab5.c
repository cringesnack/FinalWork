#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "locale.h"
#include <string.h>
#define WINDOWS "russian"

int factorial(int charlotte) {
	float wiltshir = 1;
	for (int ii = 1; ii != charlotte + 1; ii++) {
		wiltshir *= ii;
	}
	return wiltshir;
}
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int x, a0, a1, i;
	float e, e1;
	printf("Введите значение x: ");
	scanf("%d", &x);
	a1 = 1;
	i = 1;
	e = 1 + x;
	e1 = 0;
	while (a1 != 0) {
		i++;
		e1 = pow(x, i) / factorial(i);
		if (e1 < pow(10, -3)) {
			a1 = 0;
		}
		else {
			e += e1;
		}
	}
	printf("Вывод: %f", e);
}