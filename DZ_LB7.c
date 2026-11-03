#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main() {

	setlocale(LC_ALL, "RUS");

	int date, day, month;

	printf("Введите число и месяц рождения (ддмм): ");
	scanf("%d", &date);

	day = date / 100;
	month = date % 100;

	if (day < 1 || day > 31 || month < 1 || month > 12)
	{
		printf("Некорректная дата.\n");
	}
	else if ((day >= 22 && month == 12) || (day <= 19 && month == 1))
	{
		printf("Козерог");
	}
	else if ((day >= 20 && month == 1) || (day <= 18 && month == 2))
	{
		printf("Водолей");
	}
	else if ((day >= 19 && month == 2) || (day <= 20 && month == 3))
	{
		printf("Рыбы");
	}
	else if ((day >= 21 && month == 3) || (day <= 19 && month == 4))
	{
		printf("Овен");
	}
	else if ((day >= 20 && month == 4) || (day <= 20 && month == 5))
	{
		printf("Телец");
	}
	else if ((day >= 21 && month == 5) || (day <= 21 && month == 6))
	{
		printf("Близнецы");
	}
	else if ((day >= 22 && month == 6) || (day <= 22 && month == 7))
	{
		printf("Рак");
	}
	else if ((day >= 23 && month == 7) || (day <= 22 && month == 8))
	{
		printf("Лев");
	}
	else if ((day >= 23 && month == 8) || (day <= 22 && month == 9))
	{
		printf("Дева");
	}
	else if ((day >= 23 && month == 9) || (day <= 22 && month == 10))
	{
		printf("Весы");
	}
	else if ((day >= 23 && month == 10) || (day <= 22 && month == 11))
	{
		printf("Скорпион");
	}
	else if ((day >= 23 && month == 11) || (day <= 21 && month == 12))
	{
		printf("Стрелец");
	}
	return 0;
}