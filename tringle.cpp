#include <iostream>
#include <cmath>
#include "Tringle.h"
/**
 * @brief Считывает значение координаты введенное с клавиатуры
 * @param report - строка информации
 * @return считанное знаначение
 */
double getValue(std::string report = "");
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
	double x1 = getValue("Введите x1: ");
	double y1 = getValue("Введите y1: ");
	double x2 = getValue("Введите x2: ");
	double y2 = getValue("Введите y2: ");
	double x3 = getValue("Введите x3: ");
	double y3 = getValue("Введите y3: ");
	Triangle myTriangle(x1, y1, x2, y2, x3, y3);
	std::cout << "Точка H: " << myTriangle.findHeight() << std::endl;
	std::cout << "Площадь равна " << myTriangle.getPlo() << std::endl;
	return 0;
}
Triangle::Triangle(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
}
double Triangle::findHeight() const
{
	double BCx = x3 - x2;
	double BCy = y3 - y2;
	double BAx = x1 - x2;
	double BAy = y1 - y2;
	double t = (BAx * BCx + BAy * BCy) / (BCx * BCx + BCy * BCy);
	double hx = x2 + t * BCx;
	double hy = y2 + t * BCy;
	return sqrt((hx - x1) * (hx - x1) + (hy - y1) * (hy - y1));
}
double Triangle::getPlo() const
{
	return fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2.0;
}
double getValue(std::string report)
{
	std::cout << report << std::endl;
	double value = 0;
	std::cin >> value;
	if (std::cin.fail())
	{
		std::cout << "Ошибка, введено неверное значение!\n";
		exit(1);
	}
	return value;
}
