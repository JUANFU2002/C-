#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void main() {
	float x, y;
	char op;
	while (1) {
		printf("\n");

		printf("������x�����y:\n");
		scanf("%f%c%f", &x, &op, &y);
		switch (op) {
		case '+':printf("%g+%g=%g", x, y, x + y); break;
		case '-':printf("%g-%g=%g", x, y, x - y); break;
		case '*':printf("%g*%g=%g", x, y, x * y); break;
		case '/':if (y == 0) {
			printf("��", x, y, x / y);
		}
				else {
			printf("%g/%g=%g", x, y, x / y);
		}
				break;
		default:printf("�������Ч");
		}

		printf("\n");
		system("pause");
	}
}

