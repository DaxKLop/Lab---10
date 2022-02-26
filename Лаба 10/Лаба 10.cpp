#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include<Windows.h>
#include <string.h>
using namespace std;
void enterOnlyLetterString(char*);


int menu()
{
	int ch;
	printf("\n Меню: \n");
	printf("1. Задание 1:  \n");
	printf("2. Задание 2:  \n");
	printf("3. Задание 3:  \n");
	printf("4. Задание 4:  \n");
	printf("5. Задание 5:  \n");
	printf("6. Выход\n");
	printf("Ваш выбор : ");
	scanf_s("%d", &ch);
	return ch;
}


void enterOnlyLetterString(char* s)
{
	int i = 0;

	while (1)
	{
		s[i] = _getch();

		if (((((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122) || s[i] == ' ')))
		{
			cout << s[i];
			i++;
		}
	}
	s[i] = '\0';
}
int swapAToB(char* str)
{
	int i;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == 'A')
		{
			str[i] = 'B';
		}
		else if (str[i] == 'a')
		{
			str[i] = 'b';
		}
		cout << str[i];
	}

	return 0;
}

void countWordA(char* str, int k = 0)
{
	int a = strlen(str);
	for (int i = 0; i <= a; i++)
		if ((str[i + 1] == ' ' || i + 1 == strlen(str)) && (str[i] == 'А' || str[i] == 'а'))
		{
			k++;
		}
	cout << "\nКоличество слов оканчивающихся на `а`" << k;
}
void findPalindrom(char* str)
{
	int i = 0, j, k = 0;
	int lenght = strlen(str);
	for (i = 0; i <= lenght; i++)
		if ((int)str[i] >= 65 && str[i] <= 90)
			str[i] += (char)(int)(str)+32;
		else if ((int)str[i] >= -64 && str[i] <= -33)
			str[i] += (char)(int)(str)+32;
	i = 0;
	while (i != lenght)
	{
		if (str[i] == ' ')
		{
			for (j = i; str[j] != '\0'; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
		i++;
	}
	lenght = strlen(str);
	for (i = 0; i < lenght / 2; i++)
	{
		if (str[lenght - i - 1] == str[i])
			k++;
	}

	if (k == lenght / 2)
		cout << "Палиндром";
	else cout << "Не палиндром";

}
void removeSpaces(char* str)
{
	int i = 0, j, k = 0;
	char str2[101];
	int lenght = strlen(str);
	while (i != lenght)
	{
		if (str[i] == ' ' && (str[i + 1] == ' ' || i == 0))
		{
			for (j = i; str[j] != '\0'; j++)
				str[j] = str[j + 1];
			i--;
		}
		i++;
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("chcp 1251 > nul");
	setlocale(LC_ALL, "Rus");
	int count = 0, flag = 0;
	printf("Введите 1 строку: ");
	char str1[999];

	while (flag == 0)
	{
		switch (menu())
		{
		case 1:
			printf("Задание 1 : заменить все буквы `а` на буквы `б` \n ");
			enterOnlyLetterString(str1);
			swapAToB(str1);
			printf("Задание выполнено");
			break;
		case 2:
			printf("Задание 2 : определить, сколько слов заканчиваются на букву `а` \n ");
			enterOnlyLetterString(str1);
			countWordA(str1, count);
			break;
		case 3:
			printf("Задание 3 : проверить строку на палиндромность \n");
			enterOnlyLetterString(str1);
			findPalindrom(str1);
			break;
		case 4:
			printf("Задание 4 : разработать функцию, которая удаляет все лишние пробелы \n");
			enterOnlyLetterString(str1);
			removeSpaces(str1);
			printf("\n%s", str1);
			break;
		case 5:
			printf("Задание 5 :Введите имя \n");
			enterOnlyLetterString(str1);
			printf("\nПривет, %s", str1);
			break;
		case 6:
			flag = 1;
			break;
		default:
			printf("Ошибка ввода");
			break;
		}

	}
}
