#include "tasks.h"
#include <assert.h>
#include <math.h>
#include <cstdlib>

//Вычисляет периметр треугольника
double perimeter(double a, double b, double c)
{
	assert(a > 0 && b > 0 && c > 0);
	return a + b + c;
}
//Вычисляет расстояние между точками
double dist(double x1, double y1, double x2, double y2)

{
	return sqrt((x2-x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
//Вычисляет площадь треугольника по длинам трёх его сторон с помощью формулы Герона
double areaFromSides(double a, double b, double c)
{
	double p = perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
//Вычисляет площадь треугольника по координатам его вершин
double areaFromPos(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double a = dist(x1, y1, x2, y2);
	double b = dist(x2, y2, x3, y3);
	double c = dist(x3, y3, x1, y1);

	return areaFromSides(a, b, c);
}
//Возвращает наибольшее целое число, которое не превышает кубического корня заданного числа
double floorCubicRoot(double x)
{
	double x1 = pow(x, 1. / 3);
	return floor(x1);
}

//Вычисляет логарифм заданного числа по заданному основанию.
double MyLog(double x, double y)
{
	assert(y > 0 && x > 0 && y != 1);
	return log(x) / log(y);
}

//Вычисляет площадь прямоугольника по заданным координатам двух его противоположных вершин. 
double RectS(double x1, double y1, double x2, double y2)
{
	return fabs(x2 - x1) * fabs(y2 - y1);
}

//Возвращает случайное целое число от 0 включительно до целого числа n не включительно
int random(int n)
{
	assert(n > 0);
	return rand() % n;
}
//Возвращает случайное целое число от целого числа a включительно до целого числа b не включительно
int random(int a, int b)
{
	assert(a > 0 && b > 0);
	return random(b-a) + a;
}

//Возвращает случайное вецественное число от 0 включительно до 1 не включительно
double random()
{
	return static_cast<double>(rand()) / RAND_MAX;
}


