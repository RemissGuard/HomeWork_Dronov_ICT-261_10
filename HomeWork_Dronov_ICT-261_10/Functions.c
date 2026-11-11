#include<stdio.h>
#include<math.h>
void risovanie(char c,int x,int y,int z)
{
	int s;
	s = 0;
	int a = x - y;
	int b = a + z;
	int d = a + z;
	int f = z - y;
	int p = x - a;
	for (int i = 0; i < a; i++)//верхняя половина квадрата 1
	{
		for (int j = 0; j < x; j++)
		{
			printf("%c ", c);
		}
		putchar('\n');
	}
	for (int i = 0; i < p; i++)//левый нижний угол квадрата 1 и правый верхний угол квадрата 3
	{
		s = 0;
		for (int j = 0; j < d; j++)
		{
			s++;
			if (s > a && s <= x)printf("  ");
			else printf("%c ", c);
		}
		putchar('\n');
	}

	for (int i = 0; i < f; i++)//левый нижний угол квадрата 3
	{
		s = 0;
		for (int j = 0; j < d; j++)
		{
			s++;
			if (s <= a)printf("  ");
			else printf("%c ", c);
		}
		putchar('\n');
	}
}
void opredelenie()
{
	puts("Квадрат — это геометрическая фигура: плоский четырёхугольник, у которого все стороны равны и все углы прямые (равны 90 градусам).");
}
void ploshad(int x,int y,int z)
{
	int a = x - y;
	int f = z - y;
	int p = x - a;
	int S = x*a+p*a+f*z+y*f;
	printf("Площадь фигуры (закрашенной области) = %d", S);
}
void parametri(int x,int y,int z)
{
	printf("Длина стороны первого квадрата равна %d\n",x);
	printf("Длина стороны второго квадрата равна %d\n",y);
	printf("Длина стороны третьего квадрата равна %d\n",z);
}
void sravnenie(int x, int y, int z, int X,int Y, int Z)
{
	int a = x - y;
	int f = z - y;
	int p = x - a;
	int A = X - Y;
	int F = Z - Y;
	int P = X - A;
	int S_1 = x * a + p * a + f * z + y * f;
	int S_2 = X * A + P * A + F * Z + Y * F;
	printf("Разница между площадью первой и второй фигуры = %d",abs(S_1-S_2));
}