#ifndef TASKS_H
#define TASKS_H
//Вычисляет периметр треугольника
double perimeter(double, double, double);
//Вычисляет расстояние между точками
double dist(double, double, double, double);
//Вычисляет площадь треугольника по длинам трёх его сторон с помощью формулы Герона
double areaFromSides(double, double, double);
//Вычисляет площадь треугольника по координатам его вершин
double areaFromPos(double, double, double, double, double, double);
//Возвращает наибольшее целое число, которое не превышает кубического корня заданного числа
double floorCubicRoot(double);
//Вычисляет логарифм заданного числа по заданному основанию.
double MyLog(double x, double y);
//Вычисляет площадь прямоугольника по заданным координатам двух его противоположных вершин. 
double RectS(double x1, double y1, double x2, double y2);
//Возвращает случайное целое число от 0 включительно до целого числа n не включительно
int random(int);
//Возвращает случайное целое число от целого числа a включительно до целого числа b не включительно
int random(int, int);
//Возвращает случайное вецественное число от 0 включительно до 1 не включительно
double random();
#endif TASKS_H

