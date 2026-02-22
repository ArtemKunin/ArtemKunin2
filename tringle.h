/**
 * @brief класс треугольник
 */
class Triangle
{
private:
    /**
     * @brief координаты точки A
     */
    double x1, y1;
    /**
     * @brief координаты точки B
     */
    double x2, y2;
    /**
     * @brief координаты точки C
     */
    double x3, y3;

public:
    /**
     * @brief конструктор
     * @param x1 - 1 координата точки A
     * @param y1 - 2 координата точки A
     * @param x2 - 1 координата точки B
     * @param y2 - 2 координата точки B
     * @param x3 - 1 координата точки C
     * @param y3 - 2 координата точки C
     */
    Triangle(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3);

    /**
     * @brief нахождение координаты точки H высоты AH,опущенной из вершины A
     */
    double findHeight() const;

    /**
     * @brief расчет площади прямоугольника
     */
    double getPlo() const;
};
