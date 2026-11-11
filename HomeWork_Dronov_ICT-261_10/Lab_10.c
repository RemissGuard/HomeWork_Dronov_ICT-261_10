#define _CRT_SECURE_NO_WARNINGS
#define HEADER_H
#ifndef HEADER_H
#endif
#include<stdio.h>
#include<stdlib.h>
#include "Header.h"
void main()
{
	int com,x,y,z,X,Y,Z;
	char c;
	system("chcp 1251");
	puts("Введите символ, из которого будет состоять фигура");
	scanf("%c", &c);
	puts("Введите размеры первой фигуры (квадратов 1, 2 и 3 (Размер квадрата 2 должен быть меньше квадратов 1 и 3))");
	scanf("%d\n %d\n %d", &x, &y, &z);
	puts("Введите размеры второй фигуры (квадратов 1, 2 и 3 (Размер квадрата 2 должен быть меньше квадратов 1 и 3))");
	scanf("%d\n %d\n %d", &X, &Y, &Z);
	do
	{
		puts("\n\nВведите команду");
		puts("\n1 - Вычисление площади первой\n2 - Рисование первой фигуры введенным символом\n3 - Вывод параметров первой фигуры\n4 - Сравнение двух фигур по площали\n5 - Вывод определения фигуры\n0 - Конец");
		scanf("%d", &com);
		switch (com)
		{
		case(1):
			puts("\nПЛОЩАДЬ ВАШЕЙ ФИГУРЫ\n");
			ploshad(x, y, z);
			break;
		case(2):
			puts("\nВАША ФИГУРА\n");
			risovanie(c, x, y, z);
			break;
		case(3):
			puts("\nПАРАМЕТРЫ ВАШЕЙ ФИГУРЫ\n");
			parametri(x, y, z);
			break;
		case(4):
			puts("\nСРАВНЕНИЕ ДВУХ ФИГУР ПО ПЛОЩАДИ\n");
			sravnenie(x,y,z,X,Y,Z);
			break;
		case(5):
			puts("\nОПРЕДЕЛЕНИЕ ФИГУРЫ\n");
			opredelenie();
			break;
		case(0):
			puts("\nКОНЕЦ\n");
			break;
		default:
			puts("\nНЕКОРРЕКТНАЯ КОМАНДА\n");
		}
	} while (com!=0);
	return 0;
}