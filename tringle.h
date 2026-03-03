/**
 * @brief Класс Точка
 */
class Point
{
private:
    /**
     * @brief Координата X
     */
    double x;
    /**
     * @brief Координата Y
     */
    double y;
public:
    /**
     * @brief Конструктор точки
     */
    Point(double x = 0, double y = 0);

    /**
     * @brief Получение координаты X
     */
    double getX() const;

    /**
     * @brief Получение координаты Y
     */
    double getY() const;
    /**
     * @brief Проверка на равенство оператора
     */
    bool operator==(Point p) const;
    /**
     * @brief Проверка на неравенство оператора
     */
    bool operator!=(Point p) const;
};
/**
 * @brief Класс треугольник
 */
class Triangle
{
private:
    /**
     * @brief Первая вершина
     */
    Point p1;
    /**
     * @brief Вторая вершина
     */
    Point p2;
    /**
     * @brief Третья вершина
     */
    Point p3;
public:
    /**
     * @brief Конструктор
     * @param p1 - первая точка
     * @param p2 - вторая точка
     * @param p3 - третья точка
     */
    Triangle(Point p1, Point p2, Point p3);
    /**
     * @brief Нахождение координат точки H
     */
    Point getPointH() const;
    /**
     * @brief Расчет площади треугольника
     */
    double getPlo() const;
};
