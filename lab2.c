
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, ".UTF8");
	task1();
	task2();
	task3();
	return 0;
}

int task1()
{
	printf("123\n");
	printf("1\n2\n3\n");
	printf("1\n\t2\n\t\t3\t\n");
	printf("%2d\n%4d\n%6d\n%8d\n", 1, 2, 3, 4);
	printf("%10.3f\n", 12.234657);
	printf("%10.5f\n", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
	printf("%f\n", 7.0 / 5.0);
	printf("%d\n", 2000 * 4);
	printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);

	return 0;
}

int task2() {
	int N = 2, K = 3;
	printf(" «Сейчас %d часов %d минут 00 секунд» \n", N, K);
	printf("«Идет %d минута суток» \n", N * 60 + K);
	printf("«До полуночи осталось %d часов и %d минут» \n", 24 - N, 60 - K);
	printf("«С 8.00 прошло %d секунд» \n", (24 * 3600) - (N * 3600) - (K * 60));
	printf("«Текущий час  = %.2f суток  и текущая минута = %.2f часа» \n", N / 24.0, K / 60.0);

	return 0;

}

int task3() {
	int n = 2, L = 335, k = 3, m = 1;
	printf("Дано:\n\t\t%3d\n\t\t%03d\n\n\t\t_______\nОтвет:\n\t\t%+0*.*f\n", n, L, k + m + 2, m, (n * 1.0) / L);

	return 0;

}
