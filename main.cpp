#include <iostream>
#include <cmath>
#include "tringle.h"
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
