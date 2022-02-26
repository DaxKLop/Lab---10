#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include<Windows.h>
#include <string.h>
using namespace std;
void inputStr(char*);


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


void inputStr(char* s)
{

    int i = 0;

    while (1) {

        s[i] = _getch();

        if (s[i] == 13) break;
    /////
        //if (!((((int)s[i] >= 65 && (int)s[i] <= 90 && s[i] <= ' ') || ((int)s[i] >= 97 && s[i] <= 122 && s[i] <= ' '))))
        if (!(s[i] == ' ' || s[i] == 'a' ||  s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z' || s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z' || s[i] == 'а' || s[i] == 'б' || s[i] == 'в' || s[i] == 'г' || s[i] == 'д' || s[i] == 'е' || s[i] == 'ё' || s[i] == 'ж' || s[i] == 'з' || s[i] == 'и' || s[i] == 'й' || s[i] == 'к' || s[i] == 'л' || s[i] == 'м' || s[i] == 'н' || s[i] == 'о' || s[i] == 'п' || s[i] == 'р' || s[i] == 'с' || s[i] == 'т' || s[i] == 'у' || s[i] == 'ф' || s[i] == 'х' || s[i] == 'ц' || s[i] == 'ч' || s[i] == 'ш' || s[i] == 'щ' || s[i] == 'ъ' || s[i] == 'ь' || s[i] == 'ы' || s[i] == 'э' || s[i] == 'ю' || s[i] == 'я' || s[i] == 'А' || s[i] == 'Б' || s[i] == 'В' || s[i] == 'Г' || s[i] == 'Д' || s[i] == 'Е' || s[i] == 'Ё' || s[i] == 'Ж' || s[i] == 'З' || s[i] == 'И' || s[i] == 'Й' || s[i] == 'К' || s[i] == 'Л' || s[i] == 'М' || s[i] == 'Н' || s[i] == 'О' || s[i] == 'П' || s[i] == 'Р' || s[i] == 'С' || s[i] == 'Т' || s[i] == 'У' || s[i] == 'Ф' || s[i] == 'Х' || s[i] == 'Ч' || s[i] == 'Ш' || s[i] == 'Щ' || s[i] == 'Ы' || s[i] == 'Э' || s[i] == 'Ю' || s[i] == 'Я' || s[i] == 'Ъ' || s[i] == 'Ь'))
            continue;

        cout << s[i];

        i++;

    }

    s[i] = '\0';

}
int swapAToB(char* str)
{
    int i;
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == 'A')
            str[i] = 'B';
        else if (str[i] == 'a')
            str[i] = 'b';
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
    char str2[101];
    int lenght = strlen(str);
    for (i = 0; i <= lenght; i++)
    if ((int)str[i] >= 65 && str[i] <= 90)
        str[i] += (char)(int)(str) + 32;
    else if ((int)str[i] >= -64 && str[i] <= -33)
        str[i] += (char)(int)(str)+32;
    i = 0;
    while (i != lenght)
    {
        if (str[i] == ' ')
        {
            for (j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            i--;
        }
        i++;
    }
    lenght = strlen(str);
    for (i = 0; i < lenght / 2; i++)
    {
        if(str[lenght - i - 1] == str[i])
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
        if (str[i] == ' ' && (str[i+1] == ' ' || i == 0))
        {
            for (j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            i--;
        }
        i++;
    }
    //printf("\n%sdsadasdadasd\n", str);
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
            inputStr(str1);
            swapAToB(str1);
            printf("Задание выполнено");
            flag = 1;
            break;

        case 2:
            printf("Задание 2 : определить, сколько слов заканчиваются на букву `а` \n ");
            inputStr(str1);
            countWordA(str1, count);
            flag = 1;
            break;
        case 3:
            printf("Задание 3 : проверить строку на палиндромность \n");
            inputStr(str1);
            findPalindrom(str1);
            flag = 1;
            break;
        case 4 :
            printf("Задание 4 : разработать функцию, которая удаляет все лишние пробелы \n");
            inputStr(str1);
            removeSpaces(str1);
            flag = 1;
            printf("\n%s", str1);
            break;
        case 5 :
            printf("Задание 5 :Введите имя \n");
            inputStr(str1);
            printf("\nПривет, %s", str1);
            flag = 1;
            break;
        default:
            printf("Ошибка ввода");
            break;
        }
                
    }

   
}
