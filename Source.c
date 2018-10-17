#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define LEN 200
#define gets(s) fgets((s),sizeof(s),stdin)
struct PRODUCT 
{
	char category[LEN];
	char first_name[LEN];
	char second_name[LEN];
	char type_cost[LEN];
	char cost[LEN];
};
void ADD(void)
{
	FILE *fpin = fopen("Kursovaya.txt" , "a");
	struct PRODUCT adder;
	if (fpin == NULL)
		printf("Ошибка! Файл не может быть открыт =(");
	else
	{
		printf("Категория - Номенклатурное название - Маркетинговое название - Весовой(1)|штучный(0) - Цена за кг|штуку \n");
		gets(adder.category);
		gets(adder.first_name);
		gets(adder.second_name);
		gets(adder.type_cost);
		gets(adder.cost);
		gets(adder.cost);
		printf("Ввод закончен!\n");
		fputs(adder.category , fpin);
		fputs(adder.first_name , fpin);
		fputs(adder.second_name , fpin);
		fputs(adder.type_cost , fpin);
		fputs(adder.cost, fpin);
		fputs("**********" , fpin);
		printf("Смотрите файл!\n");
	}
	fclose(fpin);

}

int main()
{
	int choice;
	setlocale(LC_ALL, "Russian");
	printf("Добро пожаловать в базу данных нашего магазина! Чем Вам помочь?\n");
	printf("1 - Пополнить базу\n");
	printf("2 - Редактировать базу\n");
	printf("3 - Удалить запись из базы\n");
	printf("4 - Вывести содержимое базы в алфавитном порядке по названию товара\n");
	printf("5 - Вывести содержимое базы в алфавитном порядке по категориям товара\n");
	printf("6 - Подобрать 'минимальную корзину' по заданному списку продуктов\n");
	scanf("%d", &choice);

	(choice < 1 || choice > 6) ? printf("Ошибка! Такой функции нет =(\n") : system("cls");

	switch (choice)
	{
	case 1:
		ADD();
		break;
	case 2:
		printf("Dva\n");
		break;
	case 3:
		printf("Tri\n");
		break;
	case 4:
		printf("Chetire\n");
		break;
	case 5:
		printf("Pyat'\n");
		break;
	case 6:
		printf("Shest'\n");
		break;
	}
	return 0;
}