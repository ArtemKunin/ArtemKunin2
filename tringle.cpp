#include <iostream>
#include <cmath>
#include "tringle.h"
Triangle::Triangle(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
    if (this->getPlo() == 0)
    {
        std::cout << "Ошибка! Треугольник не существует!" << std::endl;
        exit(1);
    }
    if ((x3 - x1) * (y2 - y1) - (y3 - y1) * (x2 - x1) == 0)
    {
        std::cout << "Ошибка: Треугольник не существует!" << std::endl;
        exit(1);
    }
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
